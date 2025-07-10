#include <iostream>
using namespace std;


//class is the blueprint or template for an object
class Book {
    public:
    string title;
    string author;
    int page;
};

//object is an instance of the class
int main ()
    {
        Book book1;
        book1.title = "Lord of the Rings";
        book1.author = "Tolkien";
        book1.page = 1000;

        cout << book1.title << endl;
    
    }