#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string studentName;
    string gradesInput;
    
   
    cout << "Enter the student's name: ";
    getline(cin, studentName);
    
    cout << "Enter the 5 grades (3 practicals, 1 semester test, 1 exam) separated by spaces: ";
    getline(cin, gradesInput);

    
    float finalGrade = 0.0;

    // You are required to write the logic to calculate the final grade here:
    // - Convert the grades from the string to appropriate numeric values
    // - Calculate the final grade using the given weightings:
    //   3 practicals (10% each), semester test (30%), exam (40%)

   
   
    cout << studentName << "'s final grade is: " << finalGrade << endl;

    return 0;
}