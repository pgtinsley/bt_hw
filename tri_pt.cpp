#include <iostream>
#include <cmath> 

using namespace std;

int main()
{

	// declare variables
	int n;
	double theta;

	// prompt user for theta (degrees)
	cout << "Input theta in degrees [double] : ";
	cin >> theta;

	// convert degrees to radians
	double rads = (theta / 180.0) * M_PI;

	// draw some triangles! 
	int num_rows = 31;
	
	for (int r=0; r<num_rows; r++) { 
	
		// floor squashes down to nearest int
		// it helped to draw a picture with r on y-axis/theta in top-left
		for(int c=0; c <= floor( r * tan(rads) ); c++) { 
			cout << "*";	
		}
		cout << endl;
	}

	return 0;
}