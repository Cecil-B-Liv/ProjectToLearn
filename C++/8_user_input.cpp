#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::string;
using std::getline;

int main(){
    string name;
    int age;
     
    cout << "Whats ur age: "; 
    cin >> age;

    cout << "Whats ur name: "; 
    getline(cin >> std::ws,name);

    cout << "Hello " << name << '\n';
    cout << "U're  " << age << " years old" <<'\n';

    return 0;
}


// getline(cin,name);