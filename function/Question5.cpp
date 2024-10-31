#include <iostream>
#include <string>
using namespace std;

void checkEligibility(string city, int interMarks, double monthlyIncome) {
    if ((city == "Faisalabad" && interMarks <= 700 && monthlyIncome < 40000) ||
        (city != "Lahore" && interMarks > 700 && monthlyIncome >= 40000)) {
        cout << "Eligible for Scholarship" << endl;
    } else {
        cout << "will decide later" << endl;
    }
}

int main() {
    string city;
    int interMarks;
    double monthlyIncome;

    cout << "Enter city: ";
    cin >> city;
    cout << "Enter inter marks: ";
    cin >> interMarks;
    cout << "Enter monthly income: ";
    cin >> monthlyIncome;

    checkEligibility(city, interMarks, monthlyIncome);

    return 0;
}
