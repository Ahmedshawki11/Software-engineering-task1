#include <iostream>
using namespace std;

class book {
public:
    string title;
    string author;
    int price;

    void display() {
        cout << "title  : " << title << endl;
        cout << "author : " << author << endl;
        cout << "price  : " << price << endl;
    }
};

int main() {
    book a1;

    cout << "Enter title: ";
    cin >> a1.title;

    cout << "Enter author: ";
    cin >> a1.author;

    cout << "Enter price: ";
    cin >> a1.price;

    a1.display();

    return 0;
}
