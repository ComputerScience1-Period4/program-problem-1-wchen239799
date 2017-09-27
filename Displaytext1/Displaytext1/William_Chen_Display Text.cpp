/*
William Chen
Assignment Name: Display Text
Introduction to C++ Visual Studios
Print Statements to console from coding
*/

//Libraries
#include <iostream> // cout, cin, endl;
#include <conio.h> // pause() fun access to _getch() and _kbhit()
#include <string>



//Namespace
using namespace std;


string name;
string personality;
string period;

//Functions
void pause() {
	cout << "Press any key to continue!";
	while (!_kbhit());
	_getch();
	cout << '\n';

}

//Main
void main() {
	char H = 'H';
	char E = 'e';
	char L = 'l';
	char O = 'o';
	char W = 'W';
	char R = 'r';
	char D = 'd'; 
	cout << H << E << L << L << O << " " << W << O << R << L << D << "!" << endl;
	cout << " " << endl;
	cout << "Please enter your name!" << endl;
	cout << " " << endl; 
	cout << "Name : " << endl;
	cout << " " << endl;
	cin >> name;
	cout << " " << endl; 
	cout << "Hello " << name << "!" << endl;
	cout << " " << endl;
	cout << "Describe yourself with an adjective!" << endl;
	cout << " " << endl;
	cout << "Adjective: " << endl;
	cout << " " << endl;
	cin >> personality;
	cout << " " << endl;
	cout << "Hello " << personality << " " << name << "!" << endl;
	cout << " " << endl;
	cout << "Please enter your class period!" << endl;
	cout << " " << endl;
	cout << "Class Period: " << endl;
	cout << " " << endl;
	cin >> period;
	cout << " " << endl; 
	cout << "Hello " << personality << " " << name << " " << "from period " << period << "!" << endl;

	pause();
	return;


}