#include <windows.h>
#include <iostream>
#include <string>
int main() {
		std::string bash1;
		std::cout << "WinDOS \n\n";
		while (2) {
			std::cout << "\n$: ";
		std::cin >> bash1;
		if (bash1 == "help") {
			std::cout << "See any command whit: docs";
		}
		else if (bash1 == "docs") {
			system("start https://is.gd/WinDosDocs");
		}
		else if (bash1 == "version") {
			std::cout << "current version: alpha 0.3";
		}
		else if (bash1 == "about") {
			std::cout << "WinDOS made by Surckre\n\n My Discord: https://discord.gg/Surckre"; //just a spaceholder
		}
		else if (bash1 == "exit") {
			exit(1);
		}
		else if (bash1 == "gdi1") {
			int stm{};
			std::cout << "GDI Speed (1 - 1000)";
			std::cin >> stm;
			if (stm >= 1001) {
				exit(1);
			}
			HDC hdc = GetDC(0);
			int x = SM_CXSCREEN;
			int y = SM_CYSCREEN;
			int w = GetSystemMetrics(0);
			int h = GetSystemMetrics(1);

			while (1000) {
				BitBlt(hdc, rand() % 1, 1, w, h, hdc, rand() % 1, rand() % 1, SRCINVERT);
				Sleep(stm);
			}

		}
		else if (bash1 == "beep") {
			while (1) {
				Beep(rand() % 1000, rand() % 100);
			}
		}
		else if (bash1 == "calc") {
			double num1;
			char opt;
			double num2;
			double sum;
			std::cout << "Enter firt number: ";
			std::cin >> num1;

			std::cout << "Enter Operator (+ - * /): ";
			std::cin >> opt;

			std::cout << "Enter second number: ";
			std::cin >> num2;

			if (opt == '+') {
				std::cout << num1 + num2;
			}
			else if (opt == '-') {
				std::cout << num1 - num2;
			}
			else if (opt == '*') {
				std::cout << num1 * num2;
			}
			else if (opt == '/') {
				std::cout << num1 / num2;
			}
			else {
				std::cout << "the operator " << opt << " is not valid";
			}
		}
		else if (bash1 == "cls") {
			system("cls");
			std::cout << "WinDOS\n";
		}
		else if (bash1 == "start") {
			std::string prs;
			std::cin >> prs;
			std::string command = "start " + prs;
			system(command.c_str());
		}
		else if (bash1 == "sdr") {
			system("dir");
		}
		else if (bash1 == "goto") { // dont work
			std::string cdn;
			std::cin >> cdn;
			std::string gto = "cd " + cdn;
			system(gto.c_str()); 
		}
		else if (bash1 == "tr") {
			system("tree");
		}
		else if (bash1 == "tc") {
			std::string cc;
			std::cin >> cc;

			if (cc == "red") {
				system("color 4");
			}
			else if (cc == "blue") {
				system("color 1");
			}
			else if (cc == "green") {
				system("color 2");
			}
			else if (cc == "yellow") {
				system("color 6");
			}
			else {
				system("cls");
				std::cout << "Invalid Color!";
			}
			
		}
		else if(bash1 == "kmtom"){
			double KM;
			int cse;
			double M;
			std::cout << "KM to M converter\n\n1) KM to M\n2) M to KM\n: ";
			std::cin >> cse;

			if (cse == 1) {
				std::cout << "Enter KM: ";
				std::cin >> KM;
				std::cout << KM * 0.621371;
			}
			if (cse == 2) {
				std::cout << "Enter M: ";
				std::cin >> M;
				std::cout << M * 1.60934;
			}
		}
		else if (bash1 == "pi") {
			std::cout << "PI is: 3.141592653589793238462643383279502884197169399375105820974944592";
		}
		else if (bash1 == "getcode") {
			system("https://github.com/Surckre/WinDOS/blob/main/WinDos.cpp");
		}
		else {
			std::cout << "invalid option";
		}
		
	}
}
