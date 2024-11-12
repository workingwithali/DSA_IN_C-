#include <iostream>
using namespace std;

void sum(int a, int b) {
    int result = a + b;
    cout << result<<'\t';
}

int add() {
    int a = 12;
    int b = 23;
    sum(a, b);
    return a;
}

int main() {
	int w;
    w = add();
    cout<<w;
    return 0;
}
