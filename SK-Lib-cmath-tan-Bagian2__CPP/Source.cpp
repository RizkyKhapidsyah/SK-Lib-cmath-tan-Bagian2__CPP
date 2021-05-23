#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main(){
	long double x = 0.99999, result;
	result = tan(x);
	cout << "tan(x) = " << result << endl;

	double xDegrees = 60.0;
	// converting degree to radians and using tan() fucntion
	result = tan(xDegrees * 3.14159 / 180);
	cout << "tan(x) = " << result << endl;

	_getch();
	return 0;
}