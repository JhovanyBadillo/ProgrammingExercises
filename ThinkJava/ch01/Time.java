public class Time{
	public static void main(String[] args){
		System.out.println("The class Time");
		int hour = 19;
		int minute = 59;
		int second = 48;
		int sec_since_mid1 = hour*3600 + minute*60 + second;
		System.out.println("Number of seconds since midnight: " + sec_since_mid1);
		int rem_hours = 24 - hour;
		System.out.println("Number of seconds remaining in the day: " + (rem_hours*3600 - minute*60 - second));
		System.out.println("Exact value. In a day, there are " + 24*3600 + " seconds");
		System.out.println("Value of this program: " + 
				   ((hour*3600 + minute*60 + second)+(rem_hours*3600 - minute*60 - second)));
		double seconds_passed = hour*3600 + minute*60 + second;
		double total_seconds = 24*3600;
		System.out.println("Percentage of the day that has passed: " + ((seconds_passed/total_seconds)*100) + "%");
		hour = 20;
		minute = 26;
		second = 12;
		int sec_since_mid2 = hour*3600 + minute*60 + second;
		System.out.println("Elapsed time in minutes: " + (sec_since_mid2-sec_since_mid1)/60.0);
	}
}
