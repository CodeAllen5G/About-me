/*006this.cpp*/
#include <iostream>

using namespace std;

class Book
{
private:
    string name;
    double price;
    char language;
public:
    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    char getLanguage () {
        return language;
    }

    Book * setName(string name) {
        this->name = name;
        return this;
    }

    Book * setPrice(double price) {
        this->price = price; 
        return this;
    }

    Book * setLanguage(char language) {
        this->language = language; 
        return this;
    }
};

int main() {
    Book *book = new Book();
    book->setName("C++")->setPrice(65.5)->setLanguage('E');
    cout << book->getName().c_str() << ":" << book->getPrice() << endl;
    getchar();
}