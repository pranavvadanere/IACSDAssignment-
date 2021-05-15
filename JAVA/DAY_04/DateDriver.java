//9:Create Date class with  data members day,month,year.create 
//getter setter for data members.writ display function to display date.


class Date{

	private int day;
	private int month;
	private int year;

	public Date(int day, int month, int year) {
		this.day = day;
		this.month = month;
		this.year = year;
	}

	public int getDay() {
		return day;
	}
	public void setDay(int day) {
		if(day > 31 || day < 1) 
			return;
		this.day = day;
	}
	public int getMonth() {
		return month;
	}
	public void setMonth(int month) {
		if(month > 12 || month < 1) 
			return;
		this.month = month;
	}
	public int getYear() {
		return year;
	}
	public void setYear(int year) {
		if(yearCount(year) == 4)
			this.year = year;
		else {
			System.out.println("invalid year");
			return;
		}
	}
	public void display(){
		System.out.println(this.day + "/" + this.month + "/" + this.year);
	}
	private int yearCount(int year) {
		int count = 0;
		while(year != 0) {
			count++;
			year/=10;
		}
		return count;
	}
}
public class DateDriver {

	public static void main(String[] args) {
		Date date = new Date(1,1,1995);
		date.display();
		Date date2 = new Date(1,2,1994);
		System.out.println(date2.getYear());
		System.out.println(date2.getDay());
		System.out.println(date2.getMonth());
		
		date2.setYear(2012);
		System.out.println(date2.getYear());
	}

}
