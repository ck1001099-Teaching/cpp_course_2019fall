#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

	map<string, string> m1;
	m1["你好"] = "Hello";
	m1["世界"] = "World";
	cout << m1["你好"] << endl;

	map<string, int> m2;
	m2["Amy"] = 30;
	m2["Bob"] = 24;
	m2["Cindy"] = 18;
	cout << m2.size() << endl;
	m2.clear();
	cout << m2.size() << endl;

	return 0;
}








