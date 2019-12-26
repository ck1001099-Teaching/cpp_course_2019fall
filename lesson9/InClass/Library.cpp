#include <iostream>
#include <string>
#include <vector>
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
		cout << "Database initialization" << endl;
	}
	void AddBook(Book newBook){
		books.push_back(newBook);
		cout << "Add book successfully" << endl;
	}
	void ShowBooks(){
		for (int i = 0 ; i < books.size() ; i++){
			cout << "---------------" << endl
				 << "#" << i << endl
				 << "Name: " << books[i].name << endl
				 << "Author: " << books[i].author << endl
				 << "ISBN: " << books[i].ISBN << endl
				 << "price: " << books[i].price << endl
				 << "---------------" << endl;
		}
	}
private:
	vector<Book> books;
};

int main(){
	Database database;
	// [Add book]       0 bookname author ISBN price : 
	// [Show all books] 1
	int command;
	while (cin >> command){
//		if (command == 0){
//			Book tmpBook;
//			cin >> tmpBook.name >> tmpBook.author >> tmpBook.ISBN >> tmpBook.price;
//			database.AddBook(tmpBook);
//		} else if (command == 1){
//			database.ShowBooks();
//		} else {
//			cout << "Please enter a correct command" << endl;
//		}
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
			default:{
				cout << "Please enter a correct command" << endl;
				break;
			}
		}
	}
	
	return 0;
}





