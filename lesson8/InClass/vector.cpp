#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

	vector<int> vec;
	cout << vec.size() << endl;
	vec.push_back(14);
	cout << vec.size() << endl;
	for (int i = 0 ; i < 10 ; i++){
		vec.push_back(i * i);
	}
	cout << vec.size() << endl;
	cout << vec[6] << endl;
	cout << vec.at(6) << endl;

	for (int i = 0 ; i < vec.size() ; i++){
		cout << "#" << i << ": " << vec[i] << endl;
	}

	vec.clear();
	cout << vec.size() << endl;

	vector<string> vec2;
	vec2.push_back("Hello");
	vec2.push_back("World");
	cout << vec2[0] << " " << vec2[1] << endl;

	vector< vector<int> > vec3;
	for (int i = 0 ; i < 3 ; i++){
		vector<int> tmp;
		for (int j = 0 ; j < 4 ; j++){
			tmp.push_back(i*4 + j);
		}
		vec3.push_back(tmp);
	}
	cout << vec3[0][3] << endl;

	vector<int*> vec4;
	cout << (&vec4) << endl;

	vector<double>* vec_ptr = new vector<double>;
	(*vec_ptr).push_back(3.14);
	cout << vec_ptr << " " << (*vec_ptr)[0] << endl;
	delete vec_ptr;
	// int* ptr;
	// *ptr = 10;



	return 0;
}








