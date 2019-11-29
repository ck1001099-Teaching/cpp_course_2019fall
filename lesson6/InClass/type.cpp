#include <iostream>
using namespace std;

int main(){

	int a = 3, b = 5;
	double c = 3.14;

	cout << a + c << endl;
	double d = a + c;
	int e = a + c;
	cout << d << " " << e << endl;
	cout << (int)d << " " << e << endl;
	cout << d << " " << e << endl;

	double f = 5.0/10;
	cout << f << endl;
	double g = (double)a / b;
	cout << g << endl;

	// invalid
	cout << (double)"Hello World" << endl;
	return 0;
}