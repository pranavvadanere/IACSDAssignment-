/*3->Create Date Class with Data Members day,month, year

3.1:
Create an object and initialize it using mutator methods and accesses it using
accessor methods. Print the date.

3.2
Create two objects and initialize them using no-argument and parameterized
constructor respectively. Print the date
 * */
package com.iacsd.problem3;

public class Date {
	int day, month,year;
	
	public Date() {
		this.day = 1;
		this.month = 1;
		this.year = 2000;
	}
	
	
	public Date(int day,int month,int year) {
		this.day = day;
		this.month = month;
		this.year = year;
	}
	private boolean checkYearFormat(int year) {
		int countOfdigit = 0;
		while(year!= 0) {
			countOfdigit++;
			year/=10;
		}
		if(countOfdigit == 4)
			return true;
		else
			return false;
	}
	public void setDay(int day) {
		if(day > 31 || day < 1)
			return;
		this.day = day;
	}
	public void setMonth(int month) {
		if(month > 12 || month < 1) {
			return;
		}
		this.month = month;
	}
	public void setYear(int year) {
		if(checkYearFormat(year))
			this.year = year;
		else
			return;
	}
	public int getDay() {
		return this.day;
	}
	public int getMonth() {
		return month;
	}
	public int getYear() {
		return year;
	}
	public void printDate() {
		System.out.println(this.day +"/"+this.month +"/"+this.year);
	}
}
