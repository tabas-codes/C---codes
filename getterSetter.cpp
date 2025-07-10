#include<iostream>
using namespace std;

class Bakery {
    private: double price;
    public:
    string flavour;
    int quantity;
    Bakery ( string aflavour, double aprice, int aquantity ){
        flavour = aflavour;
        setprice(aprice);
        quantity = aquantity;

    }
    void setprice (double aprice){
        if (aprice >= 500){
            price = aprice;
        }
       else {
        cout << "Invalid price" << endl;
       }
    }
    double getprice(){
        return price;
    }
};


int main(){
 Bakery b1("chocolate", 10, 5);
 cout << b1.getprice() << endl;
}
