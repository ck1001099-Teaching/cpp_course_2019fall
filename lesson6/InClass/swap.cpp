#include <iostream>
using namespace std;

void swap(void*, void*, int);

int main(){
	int a = 10, b = 20;
	swap(&a, &b, sizeof(int));
	cout << a << " " << b << endl;
	double c = 3.14, d = 6.28;
	swap(&c, &d, sizeof(double));
	cout << c << " " << d << endl;
	//char bool float

	return 0;
}

void swap(void* ptr1, void* ptr2, int len){
	char* p1 = (char*)ptr1;
	char* p2 = (char*)ptr2;
	for (int i = 0 ; i < len ; i++){
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;

		p1++;
		p2++;
	}
}






