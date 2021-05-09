// Create a class Book with data members as bname,id,author,price. Write getters and setters for all the
// data members. Also add the display function. Create Default and Parameterized constructors. Create
// the object of this class in main method and invoke all the methods in that class.

#include <iostream>
#include<string.h>
using namespace std;

class Book{
private:
	string bname;
	long id;
	string author;
	int price;
public:
	Book(){
		this -> bname = "";
		this -> id = 0l;
		this -> author = "";
		this -> price = 0;
	}
	Book(string bname, long id, string author,int price){
		this -> bname = bname;
		this -> id = id;
		this -> author = author;
		this -> price = price;
	}
	void setBname(string bname){
		this -> bname = bname;
	}
	void setId(long id){
		this -> id = id;
	}
	void setAuthor(string author){
		this -> author = author;
	}
	void setPrice(int price){
		this -> price = price;
	}
	string getBname(){
		return bname;
	}
	long getId(){
		return id;
	}
	string getAuthor(){
		return author; 
	}
	int getPrice(){
		return price;
	}
	void display(){
		cout << " book name is "<< bname << endl;
		cout << " id of book is "<< id << endl;
		cout << " author name is "<< author << endl;
		cout << " price of book is "<< price <<"/-"<< endl;
	}

};

int main(){
	Book b1("letUs C",10000l, "yashwant kanitkar",150);
	b1.display();
	b1.setPrice(350);
	b1.display();
	cout << b1.getAuthor() << endl;
	return 0;
}

/*

OUTPUT: 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ g++ problem3.cpp 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ ./a.out 
 book name is letUs C
 id of book is 10000
 author name is yashwant kanitkar
 price of book is 150/-
 book name is letUs C
 id of book is 10000
 author name is yashwant kanitkar
 price of book is 350/-
yashwant kanitkar
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ 



*/