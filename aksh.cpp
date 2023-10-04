#include <iostream>
using namespace std;

int main() {

  int firstnumber, secondnumber, sum;
    
  cout << "Enter two integers: ";
  cin >> firstnumber >> secondnumber;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = firstnumber + secondnumber;

  // prints sum 
  cout << firstnumber << " + " <<  secondnumber << " = " << sum;

  return 0;
}