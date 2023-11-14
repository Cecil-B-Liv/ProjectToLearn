#include <iostream>

using std::cout;

int main() 
{
   int age;

   cout << "Enter your age: ";
   std::cin >> age;

   if(age >= 18){
      cout << "Welcome to the site!";
   }
   else if(age < 0){
      cout << "You haven't been born yet!";
   }
   else{
      cout << "You are not old enough to enter!";
   }

   return 0;
}