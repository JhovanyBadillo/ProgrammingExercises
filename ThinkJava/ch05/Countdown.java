import java.util.Scanner;
public class Countdown{
	public static void countdown(int n){
		if(n == 0){
			System.out.println("Blastoff!");
		} else{
			System.out.println(n);
			countdown(n - 1);
		}
	}

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n;
		System.out.print("n = ");
		n = in.nextInt();
		countdown(n);
	}
}
