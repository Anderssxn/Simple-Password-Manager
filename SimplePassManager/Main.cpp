#include <iostream>
#include <fstream>

using namespace std; //<--- this is to make "std::cout" shorter and use "cout" only instead.

//Declaring Variables
//---------------------------------


string site;
string pass;
string user;
string mail;
string repeat;



//Main Funtion
//---------------------------------
int main() {

	cout << " ______________________________________" << endl;
	cout << "|                                      |" << endl;
	cout << "| Simple Password Manager by Anderssxn |" << endl;
	cout << "|______________________________________|" << endl;
	cout << "" << endl;

	cout << "+ Website: ";
	cin >> site; // <---- stores the user input text in the "site" variable


	cout << "" << endl;


	cout << "+ Username: ";
	cin >> user; // <---- same as the "cin" above but stores the input text in user, it will be the same  for the other cin.


	cout << "" << endl;

	cout << "+ Email: ";
	cin >> mail;


	cout << "" << endl;


	cout << "+ Password: ";
	cin >> pass;


	//Trying to open "MyPass.txt"
	fstream MyFile;
	MyFile.open("MyPass.txt");

	//Checking if file "MyPass.Text" exists, if it doesnt exist (which it means that "MyFile.Open()" failed), it will create the file in the same directory as the program.
	if (MyFile.fail()) {
		ofstream MyFile("MyPass.txt");
	}

	// if MyPass.txt file was succesfuly opened, it will store the data that was collected in the following format
	else if (MyFile.is_open()) {

		fstream MyFile;
		MyFile.open("MyPass.txt", ofstream::app);
		MyFile << "+ [ Site: " << site << " ]______________________________________________" << endl;
		MyFile << "" << endl;
		MyFile << "- Username: " << user << endl;
		MyFile << "- Email: " << mail << endl;
		MyFile << "- Password: " << pass << endl;
		MyFile << "" << endl;
		MyFile << "_______________________________________________________________" << endl;

		//Close File
		MyFile.close();
	}


	//Easy way to repeat all over again.
	//--------------------------------------------
	cout << "Do you want to save another password? (yes or no): ";
	cin >> repeat;

	if (repeat == "yes") {
		main();
	}

	else if (repeat == "no") {
		exit(3);
	}
	else if (repeat != "yes", "no") {
		cout << "Please, answer with yes or no.";
		cin >> repeat;
	}
	return 0;
}

