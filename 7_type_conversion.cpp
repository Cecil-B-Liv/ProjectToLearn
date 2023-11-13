#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::string;

int main(){
    double x = (int) 3.14;

    cout << "x: "<< x;

    return 0;
}

// Floor
// Use integer cast to round down float number.

// float yourFloat = 10.5;
// int down = (int)yourfloat; //down = 10.


// Nearest integer
// To round to the nearest integer, add 0.5f to your float, then cast.

// float f1 = 10.3, f2 = 10.8;
// int i1, i2;
// i1 = (int)(f1 + 0.5f); //i1 = 10
// i2 = (int)(f2 + 0.5f); //i2 = 11