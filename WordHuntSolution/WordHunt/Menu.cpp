#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

#include "Time.h"
#include "Utils.h"
#include "Search.h"
#include "Menu.h"
#include "File.h"

using namespace std;
namespace hunting {
	void Menu::startMenu()
	{
		int option = -1;
		bool isValid = false;

		cout << "+-------------------------+" << endl;
		cout << "|        Main Menu        |" << endl;
		cout << "+-------------------------+" << endl;
		cout << "| # |      Options        |" << endl;
		cout << "+-------------------------+" << endl;
		cout << "| 1 | Open email files    |" << endl;
		cout << "| 2 | Show email list     |" << endl;
		cout << "| 3 | Start a new search  |" << endl;
		cout << "+-------------------------+" << endl;
		cout << "| 0 |        Exit         |" << endl;
		cout << "+-------------------------+" << endl;

		do {
			cout << "   >>> ";
			cin >> option;

			if (U.isNumber(option)) {
				cout << "Just numbers is allowed" << endl;
			}
			if (option < 0 && option > 3) {
				cout << "The input must be beteween 0 to 3" << endl;
			}

			switch (option) {
			case 1:
				// call F.openEmailFile(arg 1, arg 2);
				break;
			case 2:
				// call F.showListEmail(arg 1);
				break;
			case 3:
				searchMenu();
				break;
			case 0:
				cout << "End program, thank you!" << endl;
				isValid = true;
				break;
			}

		} while (isValid != true);
	}

	void Menu::searchMenu()
	{
		char choice = {};
		bool isTrue = false;

		cout << "+-------------------------+" << endl;
		cout << "|        Main Menu        |" << endl;
		cout << "+-------------------------+" << endl;
		cout << "| # |       Options       |" << endl;
		cout << "+-------------------------+" << endl;
		cout << "| 1 | By word             |" << endl;
		cout << "| 2 | By sender email     |" << endl;
		cout << "| 3 | By recipient email  |" << endl;
		cout << "| 4 | By subject          |" << endl;
		cout << "| 5 | By period           |" << endl;
		cout << "+-------------------------+" << endl;
		cout << "| 0 |        Exit         |" << endl;
		cout << "+-------------------------+" << endl;

		cout << endl;

		do {
			while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
				cout << "Do you want to start a new search? [Y - yes | N - no]: ";
				cin >> choice;
				if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
					cout << "Invalid input, use just Y y | N n" << endl;
				}
				else if (!U.isNumber(choice)) {
					cout << "Just letter is allowd" << endl;
				}
				else if (cin.peek() != '\n') {
					cout << "Please enter only 1 character" << endl;
					cin.ignore(1000, '\n');
				}
				else if (choice == 'N' || choice == 'n') {
					isTrue = true;
				}
			}



			//if (option == 0) {
			//	isTrue = true;
			//}

		} while (isTrue != true);
	}
}
