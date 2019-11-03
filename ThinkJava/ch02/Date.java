public class Date{
	public static void main(String[] args){
		System.out.println("Today is Sunday");
		String day = "Sunday";
		int date = 27;
		String month = "October";
		int year = 2019;
		System.out.println("American format:");
		System.out.print(day);
		System.out.print(", ");
		System.out.print(month + " ");
		System.out.print(date);
		System.out.print(", ");
		System.out.println(year);

		System.out.println("European format:");
		System.out.println(day + " " + date + " " + month + " " + year);
	}
}

