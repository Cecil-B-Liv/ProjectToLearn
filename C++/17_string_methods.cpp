#include <iostream>
#include <cstring>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
#define SIZE 100

// int main(int argc, char* argv[]){
int main(){

    string name;

    cout << "Enter ur name: ";
    getline(cin, name);

    // if (name.length() > 12){
    //     cout << "Ur name cant be over 12 characters";
    // } else {
    //     cout << "Hi " << name;
    // }

    if (name.empty()){
        cout << "Nothing was typed";
    } else {
        cout << "Hi " << name;
    }


    return 0;
}