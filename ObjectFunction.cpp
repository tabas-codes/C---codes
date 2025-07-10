#include<iostream>
using namespace std;
 
class customer {
    public:
    string name;
    double payment;
    customer( string customerName,double customerPayment){
        name = customerName;
        payment = customerPayment;
    }
    bool getsOffer (){
        if (payment > 1000){
            return true;
        }
        return false;
    }
};

int main(){
    customer c1("Mani", 300);
    customer c2("Ketty", 1200);
    if (c1.getsOffer()){
        cout << c1.name << "gets offer" << endl;
    }
    else {
        cout << c1.name <<" doesn't get offer" << endl;
    }

}