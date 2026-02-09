#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    double grade, credit;
    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    cout << "Enter number of courses: ";
    cin >> numCourses;

    vector<double> grades(numCourses);
    vector<double> credits(numCourses);

    // Input grades and credits
    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter grade: ";
        cin >> grades[i];

        cout << "Enter credit hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    // Calculate GPA
    double gpa = 0.0;
    if (totalCredits != 0)
        gpa = totalGradePoints / totalCredits;

    // For a single semester, CGPA = GPA
    double cgpa = gpa;

    // Display results
    cout << "\n----- Course Details -----" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1 
             << " | Grade: " << fixed << setprecision(2) << grades[i] 
             << " | Credit Hours: " << credits[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Semester GPA: " << fixed << setprecision(2) << gpa << endl;
    cout << "Overall CGPA: " << fixed << setprecision(2) << cgpa << endl;

    return 0;
}