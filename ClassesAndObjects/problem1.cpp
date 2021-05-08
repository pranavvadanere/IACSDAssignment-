// create a class Person with data members as name, age, city. Write getters and setters for all the data
// members. Also add the display function. Create Default and Parameterized constructors. Create the
// object of this class in main method and invoke all the methods in that class.
#include<iostream>
#include<string.h>
using namespace std;

class Person{
private:
	string name;
	short age;
	string city;
public:
	Person(){
	//default constructor
		name = "";
		age = 0;
		city = "";
	}
	Person(string name, short age,string city){
		this -> name = name;
		this -> age = age;
		this -> city = city;
	}
	void setName(string name){
		this-> name = name;
	}
	void setAge(short age){
		this -> age = age;
	}	
	void setCity(string city){
		this -> city = city;
	}
	string getName(){
		return name;
	}
	short getAge(){
		return age;
	}
	string getCity(){
		return city;
	}
	void display(){
		cout << "Name of the person is "<< name <<endl;
		cout << "age of the person is "<< age <<endl;
		cout << "city of the person is "<< city <<endl;
	}
};

int main(){
	string name;
	string city;
	short age;
	Person *ptr = new Person("pranav",25,"pune");
	ptr -> display();
	cout << "enter name\t";
	cin >> name;
	cout << "enter age\t";
	cin >> age;
	cout << "enter city\t";
	cin >> city;
	ptr -> setName(name);
	ptr -> setAge(age);
	ptr -> setCity(city);
	// ptr -> display();
	cout << ptr->getName() << endl;
	cout << ptr-> getAge() << endl;
	cout << ptr->getCity() << endl;
	return 0;
}