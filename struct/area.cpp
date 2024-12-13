#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle r;
    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;

    float area = r.length * r.width;
    float perimeter = 2 * (r.length + r.width);

    cout << "\nArea: " << area << "\nPerimeter: " << perimeter << endl;
    return 0;
}