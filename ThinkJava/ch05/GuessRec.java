import java.util.Scanner;
import java.util.Random;
public class GuessRec{

	public static void showDifferenceLow(int n, int m){
		System.out.println("too low");// by " + Math.abs(n-m));
	}

	public static void showDifferenceHigh(int n, int m){
		System.out.println("too high");// by " + Math.abs(n-m));
	}

	public static void ask(int randomNumber, int providedNumber){
		Scanner in = new Scanner(System.in);
		System.out.print("Type a number: ");
		providedNumber = in.nextInt();
		if(providedNumber == randomNumber){
			System.out.println("That's my number");
		} else if(providedNumber < randomNumber){
			showDifferenceLow(providedNumber, randomNumber);
			ask(randomNumber, providedNumber);
		} else if(providedNumber > randomNumber){
			showDifferenceHigh(providedNumber, randomNumber);
			ask(randomNumber, providedNumber);
		}
	}

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		Random random = new Random();
		int randomNumber = random.nextInt(100) + 1;
		System.out.println("I'm thinking of a number" + 
				" between 1 and 100 (including" + 
				" both)");
		ask(randomNumber, 2);//value 2 represents an arbitrary 
					//number, just to pass a parameter
	}
}
		
