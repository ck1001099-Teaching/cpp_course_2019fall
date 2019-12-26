#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;

class Book {
public:
	string name;
	string author;
	string ISBN;
	double price;
private:
};

class Database{
public:
	Database(){
		ifstream ifs;
		ifs.open("database.txt", ios::in);
		if (!ifs){
			cout << "開啟檔案失敗 或 檔案不存在" << endl;
			nextIndex = 0;
		} else {
			ifs >> nextIndex;
			int index;
			while (ifs >> index){
				Book tmpBook;
				ifs >> tmpBook.name >> tmpBook.author >> tmpBook.ISBN >> tmpBook.price; 
				books[index] = tmpBook;
			}
			ifs.close();
		}
		cout << "Database initialization" << endl;
	}
	~Database(){
		ofstream ofs;
		ofs.open("database.txt", ios::out);
		if (!ofs){
			cout << "開啟檔案失敗" << endl;
		} else {
			ofs << nextIndex << endl; 
			for (map<int, Book>::iterator iter = books.begin() ; iter != books.end() ; iter++){
				ofs	<< iter->first
					<< " " << (iter->second).name
					<< " " << (iter->second).author
					<< " " << (iter->second).ISBN
					<< " " << (iter->second).price << endl;
			}
			ofs.close();
		}
	}
	void AddBook(Book newBook){
		books[nextIndex] = newBook;
		nextIndex = nextIndex + 1;
		cout << "Add book successfully" << endl;
	}
	void ShowBooks(){
		for (map<int, Book>::iterator iter = books.begin() ; iter != books.end() ; iter++){
			cout << "---------------" << endl
				 << "#" << iter->first << endl
				 << "Name: " << (iter->second).name << endl
				 << "Author: " << (iter->second).author << endl
				 << "ISBN: " << (iter->second).ISBN << endl
				 << "price: " << (iter->second).price << endl
				 << "---------------" << endl;
		}
	}
	void RemoveBookByIndex(int index){
		books.erase(index);
	}
private:
	map<int, Book> books;
	int nextIndex;
};

int main(){
	Database database;
	// [Add book]       0 bookname author ISBN price : 
	// [Show all books] 1
	// [Exit]           2
	// [Remove book]    3 index
	int command;
	bool exit;
	while (!exit && cin >> command){
		switch (command){
			case 0:{
				Book tmpBook;
				cin >> tmpBook.name >> tmpBook.author >> tmpBook.ISBN >> tmpBook.price;
				database.AddBook(tmpBook);
				break;
			}
			case 1:{
				database.ShowBooks();
				break;
			}
			case 2:{
				exit = true;
				break;
			}
			case 3:{
				int index;
				cin >> index;
				database.RemoveBookByIndex(index);
				break;
			}
			default:{
				cout << "Please enter a correct command" << endl;
				break;
			}
		}
	}
	
	return 0;
}
