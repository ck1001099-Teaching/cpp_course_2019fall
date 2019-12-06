#include <iostream>
using namespace std;

/* implement */
class Rectangle {
public:
	void setLength(int l){
		length = l;
	}
	void setWidth(int w){
		width = w;
	}
	int getLength(){
		return length;
	}
	int getWidth(){
		return width;
	}
	int perimeter(){
		return 2 * (length + width);
	}
	int area(){
		return length * width;
	}
private:
	int length, width;
};

int main(){
	Rectangle rect;
	int l, w;
	cin >> l >> w;
	rect.setLength(l);
	rect.setWidth(w);
	cout << "Perimeter: " << rect.perimeter() << endl;
	cout << "Area: " << rect.area() << endl;
	return 0;
}