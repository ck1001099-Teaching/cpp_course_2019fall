#include <iostream>
using namespace std;

class Drink{
public:
	Drink(int i){
		index = i;
		cout << "Create " << index << endl;
		ptr = new int[100];
	}
	~Drink(){
		cout << "Destroy " << index << endl;
		delete[] ptr;
	}
private:
	int index;
	int* ptr;
};

int main(){
	
	Drink d1(1);
	Drink d2(2);
	
	return 0;
}
