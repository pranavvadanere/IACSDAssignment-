// 2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data
// members. Also add the display function. Create Default and Parameterized constructors. Create the
// object of this class in main method and invoke all the methods in that class.\

#include <iostream>
using namespace std;
class Date{
	private:
		int dd;
		int mm;
		int yy;
		bool countYear(int year){
			int cnt = 0;
			while(year != 0){
				cnt++;
				year /=10;
			}
			if(cnt ==4)
				return true;
			else
				return false;
		}
	public:
		Date(){
	//default constructor
		dd = 0;
		mm = 0;
		yy = 0;
	}
	Date(int dd,int mm,int yy){
		this -> dd = dd;
		this -> mm = mm;
		this -> yy = yy;
	}
	void setDate(int dd){
		if(dd > 31 && dd < 1){
			cout << "invalid";
			return;
		}
		this-> dd = dd;
	}
	void setMonth(int  mm){
		if(mm > 12 && mm < 1){
			cout << "invalid";
			return;
		}
		this -> mm = mm;
	}	
	void setYear(int yy){
		if(countYear(yy)){
			this -> yy = yy;
		}else{
			cout<< "invalid year type again";
			return;
		}
	}
	int  getDate(){
		return dd;
	}
	int  getMonth(){
		return mm;
	}
	int getYear(){
		return yy;
	}
	void display(){
		cout << "date is" << endl;
		cout <<  dd << "/" << mm << "/" << yy << endl;
	}
};

int main(){
	Date d1(17,10,2021);
	d1.display();
	d1.setDate(30);
	d1.setMonth(5);
	d1.setYear(2021);
	d1.display();
	cout << d1.getDate() <<endl;
	cout << d1.getMonth() <<endl;
	cout << d1.getYear() <<endl;
	return 0;
}

/*
OUTPUT

pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ g++ problem2.cpp 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ ./a.out 
date is
17/10/2021
date is
30/5/2021
30
5
2021
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ClassesAndObjects$ 


*/