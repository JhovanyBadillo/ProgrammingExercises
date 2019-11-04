/**Sun Nov 03 2019
*
* */
import java.math.BigInteger;
public class Big{
	/* 1.
	public static long factorial(int n){
		if(n == 0){
			return 1;
		}

		long fact = 1;

		for(int i = 1; i <= n; i++){
			fact *= i;
		} return fact;
	}*/

	public static void main(String[] args){
		/* 2. 
		System.out.println("n" + "	" + "n!");

		for(int i = 0; i < 31; i++){
			System.out.println(i + "	" + 
					factorial(i));
		}*/
	
		/* 5.
		int x = 17;
		BigInteger big = BigInteger.valueOf(x);
		*/

		/* 6.
		BigInteger small = BigInteger.valueOf(17);
		BigInteger big = BigInteger.valueOf(1700000000);
		BigInteger sum = small.add(big);
		BigInteger multi = small.multiply(big);
		BigInteger power = big.pow(17);//exponent must be an 
						//integer type

		System.out.println(small + " + " + big + " = " + 
				sum);
		System.out.println(small + " * " + big + " = " + 
				multi);
		System.out.println(big + "**" + small + 
			       " = " + power);
		*/
		
		
		//7, 8. Factorial using BigInteger
		
		System.out.println("n" + "	" + "n!");

		for(int i = 0; i <= 30; i++){
			System.out.println(i + "	" +
					factorial(i));
		}
	}
					
	public static BigInteger factorial(int n){
		BigInteger fact = BigInteger.valueOf(1);
	
		if(n == 0){
			return BigInteger.valueOf(1);
		}

		for(int i = 1; i <= n; i++){
			fact = fact.multiply(BigInteger.valueOf(i));
		} return fact;
	}
	
}
