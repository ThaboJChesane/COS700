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

    // Create stringstream to process the input grades
    stringstream ss(gradesInput);
    
    // Variables to hold the grades
    float practical1, practical2, practical3, semesterTest, exam;

    // Read the grades from the input string
    ss >> practical1 >> practical2 >> practical3 >> semesterTest >> exam;

    // Calculate final grade based on the weightings
    float finalGrade = (practical1 * 0.10) + (practical2 * 0.10) + (practical3 * 0.10) + 
                       (semesterTest * 0.30) + (exam * 0.40);

    
    cout << studentName << "'s final grade is: " << finalGrade << endl;

    return 0;
}
