import java.util.Scanner;
public class Temperature{

	public static void main(String[] args){

		Scanner in = new Scanner(System.in);
		double temperature_C, temperature_F;

		System.out.print("Temperature in C: ");
		temperature_C = in.nextDouble();

		temperature_F = temperature_C*(9.0/5.0) + 32.0;

		System.out.printf("%.1f C = %.1f F\n",
			       	temperature_C, temperature_F);
	}
}
