import java.util.Scanner;
public class Conversion{
	public static void main(String[] args){
		
		int input_sec, hours, minutes, rem_sec;
		final int SEC_PER_HOUR = 3600, SEC_PER_MIN = 60;
		Scanner in = new Scanner(System.in);
		
		System.out.print("Seconds: ");
		input_sec = in.nextInt();

		hours = input_sec/SEC_PER_HOUR;
		minutes = (input_sec%SEC_PER_HOUR)/SEC_PER_MIN;
		rem_sec = (input_sec%SEC_PER_HOUR)%SEC_PER_MIN;
	
		System.out.printf("%d seconds = %d hours, "
				+"%d minutes, and %d seconds\n",
			       	input_sec, hours, minutes, rem_sec);
	}
}

