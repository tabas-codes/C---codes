#include<iostream>
using namespace std;

class OldPlayer{
    public:
    void tennis(){
        cout << "The player can play tennis" << endl;
    }
    void football(){
        cout << "The player can play football" << endl;
    }
    void basketball(){
        cout << "The player can play basketballl" << endl;
    }
};

class newPlayer : public OldPlayer {
    public:
    void football(){
        cout << "The player can't play football" << endl;
    }
    void hockey(){
        cout << "The player can play hockey" << endl;
    }
 };
int main(){

    OldPlayer Maddlyn;
    Maddlyn.football();

    newPlayer Jade;
    Jade.football();

    return 0;

}