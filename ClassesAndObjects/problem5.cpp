// Create a class ComplexNumber with data members real, imaginary. Create Default and
// Parameterized constructors. Write getters and setters for all the data members. Also add the display
// function. Create the object of this class in main method and invoke all the methods in that class.

#include<iostream>
using namespace std;
class Complex{
	private: 
		int real;
		int img;
	public:
		~Complex(){
			cout << "destructor is called";
		}
		Complex(){
			real = 0;
			img = 0;
		}
		Complex(int real,int img){
			this -> real = real;
			this -> img = img;
		}
		void setReal(int real){
			this -> real = real;
		}
		void setImg(int img){
			this -> img = img;
		}
		int getReal(){
			return real;
		}
		int getImg(){
			return img;
		}
		void display(){
			cout << real <<"+" << img << "i" << endl;
		}
		void add(Complex const &c2){ //we are making read only c2 so cant manipulate value
			// c1.add(c2) => c1 = c1 + c2 
			real = real + c2.real;
			img = img + c2.img;
		}
};
int main(){
	Complex c1(1,2);
	Complex c2;
	c2.setReal(3);
	c2.setImg(5);
	c1.display();
	c1.add(c2);
	c1.display();
	cout << "c2 real " << c2.getReal() << endl; 
	cout << "c2 IMG " << c2.getImg() << endl; 
	c2.display();
	return 0;
}
/*
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ g++ problem5.cpp 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ ./a.out 
1+2i
4+7i
c2 real 3
c2 IMG 5
3+5i
destructor is calleddestructor is calledpranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$
*/