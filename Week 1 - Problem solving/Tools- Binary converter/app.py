from flask import Flask, render_template, request

app = Flask(__name__)

def decimalToBinary(decimalNumber):
    binaryNumber = ""
    steps = []
    binarySteps = []
    while decimalNumber > 0:
        remainder = decimalNumber % 2
        binaryNumber = str(remainder) + binaryNumber
        steps.append(f"{decimalNumber} / 2 = {decimalNumber // 2} remainder {remainder}")
        binarySteps.append("[" + "][".join(binaryNumber) + "]")
        decimalNumber = decimalNumber // 2
    combinedSteps = list(zip(steps, binarySteps))
    return binaryNumber, combinedSteps

def binaryToDecimal(binaryNumber):
    decimalNumber = 0
    steps = []
    runningTotalSteps = []
    binaryStr = str(binaryNumber)
    for index, digit in enumerate(reversed(binaryStr)):
        value = int(digit) * (2 ** index)
        decimalNumber += value
        steps.append(f"{digit} * 2^{index} = {value}")
        runningTotalSteps.append(f"Sum so far: {decimalNumber}")
    combinedSteps = list(zip(steps, runningTotalSteps))
    return decimalNumber, combinedSteps

@app.route('/', methods=['GET', 'POST'])
def index():
    result = ""
    combinedSteps = []
    if request.method == 'POST':
        conversionType = request.form['conversionType']
        number = request.form['number']
        
        if conversionType == 'decimalToBinary':
            binary, combinedSteps = decimalToBinary(int(number))
            result = f"Binary: {binary}"
        elif conversionType == 'binaryToDecimal':
            decimal, combinedSteps = binaryToDecimal(number)
            result = f"Decimal: {decimal}"
    
    return render_template('index.html', result=result, combinedSteps=combinedSteps)

if __name__ == '__main__':
    app.run(debug=True)