#include <iostream>
#include <string>
using namespace std;

class Cup{
public:
	Cup(){ cout << "I got a cup!!" << endl; }
	Cup(string d){
		drink = d;
		cout << "I got a cup containing " << d << endl;
	}
	Cup(int index){
		if (index == 0){
			drink = "Tea";
		} else if (index == 1){
			drink = "Cola";
		} else if (index == 2){
			drink = "Soup";
		}
	}
	void SetDrink(string d){ drink = d; }
	string GetDrink(){ return drink; }
private:
	string drink;
};

int main(){
	Cup cup;
	cup.SetDrink("Milk");
	cout << cup.GetDrink() << endl;

	Cup cup2("Black tea");
	cout << cup2.GetDrink() << endl;

	Cup cup3(2);
	cout << cup3.GetDrink() << endl;
	return 0;
}








