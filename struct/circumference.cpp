#include <iostream>
using namespace std;

struct Circle {
    float radius;
};

int main() {
    Circle c;
    cout << "Enter radius: ";
    cin >> c.radius;

    float area = 3.14159 * c.radius * c.radius;
    float circumference = 2 * 3.14159 * c.radius;

    cout << "\nArea: " << area << "\nCircumference: " << circumference << endl;
    return 0;
}