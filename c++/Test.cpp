#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> msg {"Hello","Akash"};
    for(const string& word: msg){
        cout << word << " ";
    }
    cout << endl;
    Human human = new Human();
    human.name = "Jack";
}
class Human{
    string name;
};