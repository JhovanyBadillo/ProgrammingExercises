//Write code that invites the user to input separately strings that store their given name and their family name. Print the user's full name to screen.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, surname1, surname2;
	cout << "Nombre: ";
	cin >> name;
	cout << "Apellido paterno: ";
	cin >> surname1;
	cout << "Apellido materno: ";
	cin >> surname2;
	cout << endl;
	cout << "Su nombre completo es " << name << " "<<  surname1
	       	<< " " << surname2 << endl;
	cin.get();
	return 0;
}

