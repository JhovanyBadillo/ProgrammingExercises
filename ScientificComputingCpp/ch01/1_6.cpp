//I want to record the number of cars that drive past my house each day for five consecutive days, and calculate the average of these numbers. Create an integer array to store these five numbers, and then write code to calculate the average of these numbers. Execute your code using the sample data 34, 58, 57, 32, 43. 
//Verify that you get the correct answer of 44.8.

#include <iostream>
using namespace std;

int main()
{
	int cars[5] = {34, 58, 57, 32, 43}, i;
	double sum=0;
	for(i=0;i<5;i++)
	{
		sum+=((double)(cars[i]));
	}
	cout << "Average number of cars that drive past the house: " <<
	       sum/5 << endl;

	cin.get();
	return 0;
}	

