#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    int twos = 0;
    int threes = 0;
    bool has_other_factors = false;
    
    while (x % 2 == 0)
    {
        twos++;
        x = x/2;
    }
    
    for (int i = 3; i <= sqrt(x); i += 2)
    {
        while (x % i == 0)
        {
            if (i==3)
            {
			threes++;
			}
			if (i>3)
			{
				has_other_factors = true;
			}
			x = x/i;
		}
	}
	
	if (x > 2)
	{
		has_other_factors = false;
	}
	if (x==3)
	{
		threes++;
	}
	
	if (x>3)
	{
		has_other_factors = true;
	}
	
	if (has_other_factors == 1)
	{
		cout << "No" << endl;
	} 
	else 
	{
		cout << "Yes" << endl;
		cout << "Twos= " << twos << ", Threes=" << threes << endl;
	}
	return 0;
}
