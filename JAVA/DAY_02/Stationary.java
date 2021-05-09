import java.util.Scanner;

public class Stationary {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		boolean flag = true;
		int total = 0;
		final int PEN_PRICE = 15; 
		final int PENCIL_PRICE = 15; 
		final int BOOK_PRICE = 15; 
		final int SHARPNER_PRICE = 15; 
		final int ERASER_PRICE = 15; 

		while(flag){
			System.out.println("***************IACSD***************");
			System.out.println("************************************");
			System.out.println("enter choices to add in cart");
			System.out.println(" 1 : Pencil");	
			System.out.println(" 2 : Pen");	
			System.out.println(" 3 : Book");
			System.out.println(" 4 : Sharpner");	
			System.out.println(" 5 : Eraser");	
			System.out.println(" 6 : GOTO CART");	
			System.out.println("************************************");

			int choice = scan.nextInt();
			switch(choice){
				case 1:
				System.out.println("enter the quantity of Pencil");
				int pencilQuant = scan.nextInt();
				total+= PENCIL_PRICE * pencilQuant;
				break;

				case 2:
				System.out.println("enter the quantity of pen");
				int penQuant = scan.nextInt();
				total+= PEN_PRICE * penQuant;
				break;

				case 3:
				System.out.println("enter the quantity of BOOK");
				int bookQuant = scan.nextInt();
				total+= BOOK_PRICE * bookQuant;
				break;
				case 4:
				System.out.println("enter the quantity of Sharpner");
				int sharpnerQuant = scan.nextInt();
				total+= SHARPNER_PRICE * sharpnerQuant;

				break;
				case 5:
				System.out.println("enter the quantity of eraser");
				int eraserQuant = scan.nextInt();
				total+= ERASER_PRICE * eraserQuant;

				break;
				case 6:
				System.out.println("toal price is "+ total);
				flag = false;
				break;
			}
		}
		scan.close();
	}
}
