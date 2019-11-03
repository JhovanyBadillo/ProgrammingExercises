import java.util.Scanner;
public class CheckFermat{
	public static void checkFermat(int a, int b, int c, int n){
		if(n > 2 && (Math.pow(a,n) + Math.pow(b,n))
			       	== Math.pow(c,n)){ System.out.println(
				"Holy smokes, Fermat was wrong!");
		} else{
			System.out.println("No, that doesn't work");
		}
	}
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int a, b, c, n;
		System.out.print("Type a, b, c, n, in this order: ");
		a = in.nextInt();
		b = in.nextInt();
		c = in.nextInt();
		n = in.nextInt();
		checkFermat(a,b,c,n);
	}
}			
