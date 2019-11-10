public class Rational{
	private int numerator;
	private int denominator;
	
	public Rational(){
		this.numerator = 0;
		this.denominator = 1;
	}
	
	public Rational(int numerator, int denominator){
		this.numerator = numerator;
		this.denominator = denominator;
	}
	
	public void printRational(){
		System.out.printf("%d/%d\n", this.numerator, this.denominator);
	}
	
	public String toString(){
		
		if(this.numerator > 0 && this.denominator < 0){
			return String.format("%d/%d", -this.numerator, -this.denominator);
		}
		else if(this.numerator < 0 && this.denominator > 0){
			return String.format("%d/%d", this.numerator, this.denominator);
		}
		else if(this.numerator < 0 && this.denominator < 0) {
			return String.format("%d/%d", -this.numerator, -this.denominator);
		}
		else if(this.numerator > 0 && this.denominator > 0){
			return String.format("%d/%d", this.numerator, this.denominator);
		}
		else if(this.numerator == 0 && (this.denominator < 0 || this.denominator > 0)){
			return String.format("0");
		}
		else{
			return ("This is not a valid rational number!\n");
		}
	}
	
	public void negate(){
		if(this.numerator < 0 ^ this.denominator < 0){ //^ XOR operator
			this.numerator = Math.abs(this.numerator);
			this.denominator = Math.abs(this.denominator);
		}
		else if(this.numerator < 0 && this.denominator < 0){
			this.numerator *= -1;
		}
		else if(this.numerator > 0 || this.denominator > 0){
			this.numerator *= -1;
		}
	}
	
	public void invert(){
		int temp;
		temp = this.numerator;
		this.numerator = this.denominator;
		this.denominator = temp;
	}
	
	public double toDouble(){
		return (double) this.numerator/this.denominator;
	}
	
	private int euclides(int p, int q){
		if(p%q == 0){
			return q;
		} else{
			return euclides(q, p%q);
		}
	} 
	
	public Rational reduce(){
		Rational reducedFraction = new Rational();
		
		reducedFraction.numerator = this.numerator/euclides(
		Math.abs(this.numerator), Math.abs(this.denominator));
		
		reducedFraction.denominator = this.denominator/euclides(
		Math.abs(this.numerator), Math.abs(this.denominator));
		
		return reducedFraction;
	}
	/*
	public Rational add(Rational that){
		//método que implementa, por sí, reduce
		Rational sumFraction = new Rational();
		
		int tempNumerator = this.numerator*that.denominator + 
		this.denominator*that.numerator;
		
		int tempDenominator = this.denominator*that.denominator;
		int tempGCD = euclides(tempNumerator, tempDenominator);
		
		sumFraction.numerator = tempNumerator/tempGCD;
		sumFraction.denominator = tempDenominator/tempGCD;
		
		return sumFraction;
	}*/
	
	public Rational add(Rational that){
		//método que hace uso del método público reduce
		Rational sumFraction = new Rational();
		
		int tempNumerator = this.numerator*that.denominator + 
		this.denominator*that.numerator;
		int tempDenominator = this.denominator*that.denominator;
		
		sumFraction.numerator = tempNumerator;
		sumFraction.denominator = tempDenominator;
		
		return sumFraction.reduce();
	}
	
	public static void main(String[] args){
		Rational number1 = new Rational(-1, -7);
		Rational number2 = new Rational(-31, 7);
		
		Rational sumFraction = number1.add(number2);
		
		System.out.println(number1.toString() + " + " + 
		number2.toString() + " = " + sumFraction.toString());
	}
}
