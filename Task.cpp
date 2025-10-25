#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;
    float price;

    static int count;
public:
    Book() {
        title = "Unknown";
        author = "Unknown";
        pages = 0;
        price = 0.0;
        count++;
    }

    Book(string t, string a, int p, float pr) {
        title = t;
        author = a;
        pages = p;
        price = pr;
        count++;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        pages = b.pages;
        price = b.price;
        count++;
    }

    void setDetails(string t, string a, int p, float pr) {
        title = t;
        author = a;
        pages = p;
        price = pr;
    }

    void displayDetails() {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Pages  : " << pages << endl;
        cout << "Price  : " << price << " $" << endl;
        cout << "-------------------------" << endl;
    }

    void applyDiscount(float percent) {
        price -= price * (percent / 100);
    }

    static void showCount() {
        cout << "Total books created: " << count << endl;
    }
};

int Book::count = 0;

int main() {
    Book b1; // default
    Book b2("C++ Basics", "AHMED SHAWKI", 250, 99.99); 
    Book b3(b2); 

    b1.displayDetails();
    b2.displayDetails();
    b3.displayDetails();

    b2.applyDiscount(10);   
    cout << "After discount:\n";
    b2.displayDetails();

    Book::showCount(); 

    return 0;
}
