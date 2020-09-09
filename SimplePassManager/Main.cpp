#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


using namespace std; //<--- this is to make "std::cout" shorter and use "cout" only instead.

//Declaring Variables
//---------------------------------


string site;
string pass;
string user;
string mail;
string repeat;
string mypass;
string ViewPass;

void filechecker() {
	//Trying to open "MyPass.txt"
	fstream MyFile;
	MyFile.open("MyPass.txt");
	//Checking if file "MyPass.Text" exists, if it doesnt exist (which it means that "MyFile.Open()" failed), it will create the file in the same directory as the program.
	if (MyFile.fail()) {
		cout << "Ups..., it looks like there was no MyPass.txt! file" << endl;
		Sleep(2000);
		cout << "No problem!, we are creating a new one right now! ";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << "." << endl;
		cout << "done!" << endl;
		ofstream MyFile("MyPass.txt");
		Sleep(2000);
		system("cls");
		cout << " ______________________________________" << endl;
		cout << "|                                      |" << endl;
		cout << "| Simple Password Manager by Anderssxn |" << endl;
		cout << "|______________________________________|" << endl;
		cout << "" << endl;

	}
	// Closes file to save memory.
	MyFile.close();
}




void filewrite() {
	// Writing password to a txt file
	fstream MyFile;
	MyFile.open("MyPass.txt", ofstream::app);
	if (MyFile.is_open()) {

		MyFile << "|" << endl;
		MyFile << "+-[ Site: " << site << " ]______________________________________________" << endl;
		MyFile << "" << endl;
		MyFile << "- Username: " << user << endl;
		MyFile << "- Email: " << mail << endl;
		MyFile << "- Password: " << pass << endl;
		MyFile << "" << endl;
		MyFile << "_______________________________________________________________" << endl;
		MyFile << "|" << endl;
		MyFile << "|" << endl;

		//Close File to save memory.
		MyFile.close();
	}
}




void viewPass() {

	int main();

	string Passes;
	fstream viewpass("MyPass.txt");
	cout << " ______________________________________" << endl;
	cout << "|                                      |" << endl;
	cout << "| Simple Password Manager by Anderssxn |" << endl;
	cout << "|______________________________________|" << endl;
	cout << "" << endl;
	if (viewpass.is_open())
	{
		while (getline(viewpass, Passes))
		{
			cout << Passes << endl;
		}
		viewpass.close();
	}
	cout << "Do you want to go back to the menu? (yes): ";
	cin >> repeat;

	if (repeat == "yes") {
		main();
	}
	else if (repeat != "yes") {
		cout << "Please, answer with yes";
		cin >> repeat;
	}
}



void savepass() {


	// here we call the void functions so that can be usable leter on.
	int main();
	void filechecker();
	void filewrite();



	system("cls");


	cout << " ______________________________________" << endl;
	cout << "|                                      |" << endl;
	cout << "| Simple Password Manager by Anderssxn |" << endl;
	cout << "|______________________________________|" << endl;
	cout << "" << endl;

	filechecker();

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

	filewrite();

	//Easy way to repeat all over again.
	//--------------------------------------------
	cout << "Do you want to save another password? (yes or no): ";
	cin >> repeat;

	if (repeat == "yes") {
		savepass();
	}
	else if (repeat == "no") {
		main();
	}
	else if (repeat != "yes", "no") {
		cout << "Please, answer with yes or no.";
		cin >> repeat;
	}
}


int main() {

	system("cls");
	void savepass();
	void viewPass();

	int selection;
	cout << " ______________________________________" << endl;
	cout << "|                                      |" << endl;
	cout << "| Simple Password Manager by Anderssxn |" << endl;
	cout << "|______________________________________|" << endl;
	cout << "" << endl;

	cout << "+ [ Type a number from 1-3 ]__________________________" << endl;
	cout << "" << endl;
	cout << "1- Save Password" << endl;
	cout << "2- View Existing Passwords" << endl;
	cout << "3- Exit" << endl;
	cout << "" << endl;
	cin >> selection;

	if (selection == 1) {
		savepass();
	}
	else if (selection == 2) {
		system("cls");
		viewPass();
	}
	else if (selection == 3) {
		exit(3);
	}
}

