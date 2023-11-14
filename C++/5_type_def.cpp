#include<iostream>
#include<vector>


    // Typedefs and type aliases
    // typedef = reserved keyword used to create an additional name
    //                  (alias) for another data type.
    //                  New identifier for an existing type
    //                  Helps with readability and reduces typos
    //                  Use when there is a clear benefit
    //                  Replaced with 'using' (work better w/ templates)


// typedef std::string text_f;
// typedef int number_f;
typedef std::vector<std::pair<std::string,int>> pairlist_t;

using number_f = int;
using text_f = std::string;

int main(){
    number_f age = 18;
    text_f Name = "Liv";

    std::cout << Name << '\n';
    std::cout << age << '\n';

    return 0;
}