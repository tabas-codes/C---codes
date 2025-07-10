#include<iostream>
using namespace std;


//class is the blueprint or template for an object
class Book {
    public:
    string title;
    string author;
    int page;
    // constructor- special function that runs when you create a new object
    Book (){
        title = "No title";
        author = "No author";
    }
    Book (string aTitle, string aAuthor, int aPage){
        title = aTitle;
        author = aAuthor;
        page = aPage;
    }
};

//object is an instance of the class
int main ()
    {
        Book book1("Man of stupids", "Mark Twain", 500);
        Book book2;
        cout << book2.author << endl;

        return 0;
    }