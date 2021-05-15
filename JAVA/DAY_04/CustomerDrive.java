//Create a java application for the following.
//  Create a Customer class , with data members (all private : tight encapsulation)
// name(String),email(String),age(int).Supply a parameterized constructor
// to accept all details from user.Supply an argument less  constructor 
//to init default name to "Riya" 
//, email to "riya@gmail.com",age=25.Write a method displayCustomer 
//to display customer details.

class Customer{
	private String name;
	private String email;
	private int age;

	public Customer(){
		name = "Riya";
		email = "riya@gmail.com";
		age = 25;
	}
	public Customer(String name, String email,int age){
		this.name = name;
		this.email = email;
		this.age = age;
	}
	public void setName(String name){
		this.name = name;
	}
	public void setEmail(String email){
		this.email = email;
	}
	public void setAge(int age){
		this.age = age;
	}
	public String getName(){
		return this.name;
	}
	public String getEmail(){
		return this.email;

	}
	public int getAge(){
		return this.age;
	}
	public void display() {
		System.out.println("Name is  "+ this.name);
		System.out.println("Email is "+ this.email);
		System.out.println("age is "+ this.age);
	}
	
}
public class CustomerDrive{
	public static void main(String[] args) {
		Customer customer = new Customer();
		customer.display();
		Customer customer2 = new Customer("prav","a@gmail.com",24);
		customer2.display();
		customer2.setAge(25);
		customer2.setEmail("pranav@gmail.com");
		customer2.setName("pranav vadnere");
		System.out.println(customer2.getEmail());
		System.out.println(customer2.getName());
		System.out.println(customer2.getAge());
		
		System.out.println("display method calling");
		customer2.display();
		
		
	}
}
