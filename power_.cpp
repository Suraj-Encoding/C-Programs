// CPP program to illustrate
// Power function
// #include <bits/stdc++.h>  // This header file contains all the header files
// But getting some error in this above header file

#include<iostream>  // Must be included
#include<iomanip> // for setprecision() function
#include<math.h> // for pow() function
using namespace std;

int main()
{
	double x = 5.1, y = 3.2;

	// Storing the answer in result.
	// It gives you x raised to y.
	double result = pow(x, y);    

	// printing the result upto 2 decimal place.
	cout << fixed << setprecision(2) << result << endl;
    
	// Integer value  -> ans is double which is converted to integer
	int result1 = pow(x, y);  
	cout << fixed << setprecision(2) << result1 << endl;
    
	// Upto 4 decimal
	double result2 = pow(x, y);
	cout << fixed << setprecision(4) << result2 << endl;

	return 0;
}
