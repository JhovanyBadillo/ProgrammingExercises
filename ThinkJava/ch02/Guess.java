import java.util.Scanner;
import java.util.Random;
public class Guess{
	public static void main(String[] args){
		
		Scanner in = new Scanner(System.in);

		Random random = new Random();
		int number = random.nextInt(100) + 1;
		int guess_number;

		System.out.println("I'm thinking of a " +
				"number between 1 and 100  " + 
				"(including both). Can you " +
				"guess what it is?");
		
		System.out.print("Type a number: ");
		guess_number = in.nextInt();

		System.out.printf("Your guess is: %d\n", guess_number);
		
		if(number != guess_number){
			System.out.printf("The number i was thinking " + 
					"of is: %d\n", number);
			int difference = Math.abs(number - guess_number);
	       	        System.out.println("You were off by: " + difference);
		} else{ 
			System.out.println("Yes! That is the number " + 
						"I was thinking of");
		}	
	}
}
