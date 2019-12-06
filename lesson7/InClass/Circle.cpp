#include <iostream>
using namespace std;

class Circle {
public:
	void SetRadius(double);
	double GetRadius();
	double Area();
private:
	double radius;
};

int main(){
	Circle circle, c1, c2, c3;
	circle.SetRadius(10);
	//小王.姓名 = "小王";
	cout << circle.Area() << endl;
	c1.SetRadius(100);
	c2.SetRadius(c1.GetRadius() * 2);
	cout << c1.Area() << " " << c2.Area() << endl;
	//小王.吃();
	return 0;
}

void Circle::SetRadius(double r){
	radius = r;
}

double Circle::GetRadius(){
	return radius;
}

double Circle::Area(){
	return radius * radius * 3.14;
}