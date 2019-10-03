#include <iostream>
#include <iomanip> // setprecision()
using namespace std;

int main(){
	// 整數 (integer) 
	int x, y, z;
	// '=': assign operator
	x = 3.14;
	y = 10;
	z = x + y;
	cout << x << " " << y << " " << z << endl;
	x = 5;
	cout << x << " " << y << " " << z << endl;
	// 小數 (floating point number)
	double f1, f2, f3;
	f1 = 141.3123;
	f2 = 1310.31;
	f3 = f1 * f2;
	cout << setprecision(10) << f1 << " " << f2 << " " << f3 << endl;
	// 常數 (constant) 
	const int a = 10;
	//a = 20; // error!
	
	return 0;
}





