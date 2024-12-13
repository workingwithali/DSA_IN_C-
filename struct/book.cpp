#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

int main() {
    Book b;
    cout << "Enter title: ";
    
    getline(cin, b.title);
    cout << "Enter author: ";
    getline(cin, b.author);
    cout << "Enter price: ";
    cin >> b.price;

    cout << "\nBook Information:\n";
    cout << "Title: " << b.title << "\nAuthor: " << b.author << "\nPrice: " << b.price << endl;
    return 0;
}
