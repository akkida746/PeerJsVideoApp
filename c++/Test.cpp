#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Human{
    public: string name;
};

int main(){
    vector<string> msg {"Hello","Akash"};
    for(const string& word: msg){
        cout << word << " ";
    }
    cout << endl;
    Human human; // Declaring class object
    human.name = "Jack";
    cout << human.name;

    //Dynamically allocation class object
    Human* h = new Human();
    h->name = "Jill";
    cout << h->name;
}
