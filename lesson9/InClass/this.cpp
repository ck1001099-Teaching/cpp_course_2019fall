#include <iostream>
#include <vector>
using namespace std;

class Ptr{
public:
	void ShowThis(){ cout << this << endl; }
	void SetValue(int value){
		this->value = value;
	}
	int GetValue(){
		return value;
	}
private:
	int value;
};

int main(){
	Ptr p1, p2, p3;
	Ptr arr[10];
	vector<Ptr> vec;
	vec.push_back(p1);
	
	cout << &p1 << endl;
	p1.ShowThis();
	p1.SetValue(10);
	cout << p1.GetValue() << endl;
	cout << &p2 << endl;
	p2.ShowThis();
	cout << &p3 << endl;
	p3.ShowThis();
	
	return 0;
}
