#include <iostream>
#include <string>
#include "greeting.h"

using namespace std;

class Fish{
    public: 
    virtual void swim(){
        cout << "Fish swims" << endl;
    }
};
class Tuna: public Fish{
    public: 
    void swim(){
        cout << "Tuma swims" << endl;
    }
};
int main(){
    // Polymorphism..
    Fish* fish;
    Tuna tuna;
    fish = &tuna;
    fish->swim();
    cout << "Completed";

    cout << greeting();
}
