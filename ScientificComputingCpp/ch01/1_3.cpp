//Write code that declares two vectors as arrays of double precision floating
//point numbers of length 3 and assigns values to each of the entries. Extend
//this code to that it calculates the scalar product of these vectors and prints
//it to the screen. Finally, extend the code so that it prints the Euclidean 
//norm of both vectors to screen.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double vec1[3] = {1, 2, 3}, vec2[3] = {4, 5, 6};//VECTORS DECLARED
	double dot_product=0.0, norm_vec1=0.0, norm_vec2=0.0;
	int i;
	cout << "Vec1:" << endl;
	cout.flush();
	cout << vec1[0] << endl << vec1[1] << endl << vec1[2] << endl;
	cout.flush();
	cout << "Vec2:" << endl;
	cout.flush();
	cout << vec2[0] << endl << vec2[1] << endl << vec2[2] << endl;
	cout.flush();
	for(i=0;i<3;i++)
	{
		dot_product+=vec1[i]*vec2[i];
	}
	cout << "Vec1 dot Vec2 = " << dot_product << endl;
	cout.flush();
	for(i=0;i<3;i++)
	{
		norm_vec1+=pow(vec1[i],2);
	}
	for(i=0;i<3;i++)
	{
		norm_vec2+=pow(vec2[i],2);
	}
	cout << "|Vec1| = " << sqrt(norm_vec1) << endl;
	cout << "|Vec2| = " << sqrt(norm_vec2) << endl;
	cin.get();
	return 0;
}
