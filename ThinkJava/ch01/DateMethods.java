public class DateMethods{
	
	public static void printAmerican(String day, 
			int date, String month, int year){
		System.out.println(day + ", " + month + " " + 
				date + ", " + year);
	}
	
	public static void printEuropean(String day, 
			int date, String month, int year){
		System.out.println(day + " " + date + " " +
				month + " " + year);
	}

	public static void main(String[] args){
		printAmerican("Wednesday", 30, "October", 2019);
		printEuropean("Wednesday", 30, "October", 2019);
	}
}

