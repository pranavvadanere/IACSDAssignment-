// Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write
// getters and setters for all the data members. Also add the display function. Create the object of this
// class in main method and invoke all the methods in that class.

#include<iostream>
using namespace std;

class Point{
private: 
	int x;
	int y;
public:
	~Point(){
		
	}
	Point(){
		x = 0;
		y = 0;
	}
	Point(int x, int y){
		this -> x = x;
		this -> y = y;
	}
	void setX(int x){
		this -> x= x;
	}
	void setY(int y){
		this -> y = y;
	}
	int getX(){
		return x;
	}
	int getY(){
		return y;	
	}
	void display(){
		cout << "X : " << x << endl;
		cout << "Y : " << y << endl;
	}
}; 
int main(){
	Point p1(1,2);
	p1.display();
	p1.setX(3);
	p1.setY(4);
	p1.display();

	cout << p1.getX() << endl; 
	cout << p1.getY() << endl; 

}

/*
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ g++ problem4.cpp 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ ./a.out 
X : 1
Y : 2
X : 3
Y : 4
3
4
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ 

*/