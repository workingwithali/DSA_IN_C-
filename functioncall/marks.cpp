#include <iostream>
using namespace std;

// Function to calculate average
float calculateAverage(int marks1, int marks2, int marks3) {
    return (marks1 + marks2 + marks3) / 3.0;
}

// Function to determine grade based on average marks
char assignGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    int marks1, marks2, marks3;

    // Input marks for three subjects
    cout << "Enter marks for subject 1: ";
    cin >> marks1;
    cout << "Enter marks for subject 2: ";
    cin >> marks2;
    cout << "Enter marks for subject 3: ";
    cin >> marks3;

    // Calculate average
    float average = calculateAverage(marks1, marks2, marks3);

    // Assign grade
    char grade = assignGrade(average);

    // Output results
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
