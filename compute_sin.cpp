/* Author: Brian
 * Program: compute_sin
 * Description: Reads a number x from input, an angle in radians. 
 *    Computes an approximation to sin(x) using an 4th-order Taylor series.
 */
#include <iostream>
#include <cmath>

using namespace std;

int fact(int); // declares a function the skeleton defines for you.

int main(int argc, char *argv[])
{
  // Declare any variables you need here
  int x;
  int exponent;
  float top;
  float bottom;
  double sum=0.0;
  // Prompt the user
  cout << "Enter x in radians: ";
   
  // get input
  cin >> x;

  // Do some operations
  for(int i=0; i<8 ;i++) 
  {
    exponent = (2 * i) + 1;
    top = pow(x,exponent);
    bottom = fact(exponent);
    sum = sum + ((top * pow(-1,i))/bottom);
  }
  // Print the result to the user
  cout << "The value of sin(" << x << ") is " << sum << endl;
   
   // You're done
   return 0;
   
}

// here's the actual definition of fact, declared earlier.
int fact(int n)
{
   int result = 1;
   for (int i = 1; i <= n; i++) {
      result = result * i;
   }
   return result;
}

