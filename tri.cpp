#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double theta;
  cout << "Enter a value of theta: ";
  cin >> theta; 
  for (int i=1; i<33; i++)
  {
    for (int j=0; j<i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
