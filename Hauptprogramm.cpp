#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
#include<string>
#include<limits>
#include<thread>

using namespace std;

// THIS IS ONE OF THE FIRST PROGRAMS I EVER CREATED :)

string input;
long long cb = 0;
long long r1 = 2;
int cancel_th1 = 1;

static void wrong_input()
{
	system("cls");

	cout << endl << endl << endl << endl << endl;
	cout << "   <<< PLEASE TYPE IN A VALID INTEGER BIGGER THAN 1 ! >>>";
	cout << endl << endl << endl;
}

static void input_please()
{
	system("cls");
	cout << endl << endl << endl << endl << endl;
	cout << "\t    <<< TYPE IN ANY INTEGER YOU LIKE AND PRESS ENTER TO CALCULATE IF IT IS A PRIME NUMBER ! >>>";
	cout << endl << endl << endl;
}

static void calc_base_output()
{
	system("cls");
	cout << endl << endl;
	cout << setw(65) << "CALCULATION BASE: " << "[  " << cb << "  ]";
	cout << endl << endl << endl;
}

static void waiting(int w1, int w2)
{
	while (cancel_th1 == 0)
	{
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculating    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bcAlculating    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCaLculating    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalCulating    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalcUlating    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalcuLating    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculAting    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculaTing    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculatIng    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculatiNg    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculatinG    " << std::flush;
		Sleep(w1);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculating .  " << std::flush;
		Sleep(w2);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculating .. " << std::flush;
		Sleep(w2);
		std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bCalculating ..." << std::flush;
		Sleep(w2);
	}

			/*

			This is a big Prime Number: 6000000049


		std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << std::flush;
		Sleep(100);
		std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
		Sleep(100);

		*/


	/*	system("cls");
		calc_base();

		cout << "BERECHNUNG L훃FT  [ | ] +++ BITTE WARTEN +++   ";
		system("cls");
		calc_base();
		cout << "BERECHNUNG L훃FT  [ / ] +++ BITTE WARTEN +++   ";
		system("cls");
		calc_base();
		cout << "BERECHNUNG L훃FT  [ - ] +++ BITTE WARTEN +++   ";
		system("cls");
		calc_base();
		cout << "BERECHNUNG L훃FT  [ \ ] +++ BITTE WARTEN +++   ";
		system("cls");
		calc_base();
		cout << "BERECHNUNG L훃FT  [ | ] +++ BITTE WARTEN +++   ";

	*/

}

int main()
{
	string version = "Version 2.0";
	string end = "";
	
	while (end != "q")
	{
		cout << version << setw(86) << " ";

		input_please();

		Jump1:
	
		cin >> input;

		for (size_t i = 0; i < input.length(); i++)
		{
			if (!isdigit(input[i]))
			{
				wrong_input();
				goto Jump1;
			}
		}

		try
		{
			cb = stoll(input); // converts value into long long
		}
		catch (const std::exception&)
		{
			cout << endl << end << "ERROR: Converting of input value failed !" << endl << endl;;
		}

		if (cb < 2)
		{
			wrong_input();
			goto Jump1;
		}

		calc_base_output();
						
		cancel_th1 = 0;

		ShowCursor(FALSE);
		cout << "\033[?25l"; // Part1: Solves problem with cursor showing while text animation 'waiting()' is running !

		calc_base_output();

		std::cout << "\t\t\t\t\t\t\t\t     ";

		std::thread th1(waiting, 150, 220);

		Sleep(150);

		for (; cb % r1 > 0; r1++)
		{

		}

		cancel_th1 = 1;
		th1.join();

		calc_base_output();

		cout << "\033[?25h"; // Part2: Solves problem with cursor showing while text animation 'waiting()' is running !

		if (r1 == cb)
		{
			cout << "RESULT: " << endl << setfill('_') << setw(120) << "_" << endl << endl << setfill(' ') << " " << setw(68) << "IS A PRIME NUMBER" << endl << setfill('_') << setw(120) << "_" << endl << endl << endl << endl << setfill('_') << setw(58) << "_";
			cout << endl << endl << "Divisor incremented to: " << r1 << endl << setfill('_') << setw(58) << "_" << endl << endl << endl << endl << setfill('_') << setw(58) << "_" << endl << endl;
			cout << "Calculation Base [Modulu] actual divisor: " << cb % r1;
			cout << setfill('_') << endl << setw(58) << "_";
		}

		else
		{
			cout << "RESULT: " << endl << setfill('_') << setw(120) << "_" << endl << endl << setfill(' ') << " " << setw(68) << "IS NO PRIME NUMBER" << endl << setfill('_') << setw(120) << "_" << endl << endl << endl << endl << setfill('_') << setw(58) << "_";
			cout << endl << endl << "Divisor incremented to: " << r1 << endl << setfill('_') << setw(58) << "_" << endl << endl << endl << endl << setfill('_') << setw(58) << "_" << endl << endl;
			cout << "Calculation Base [Modulu] actual divisor: " << cb % r1;
			cout << setfill('_') << endl << setw(58) << "_";
		}

		cout << endl << endl << endl << endl << "\t\t Press any key to calculate another integer, or press [q] to quit the program !";
		cout << endl << setfill(' ') << setw(172) << " " << version << endl;

		r1 = 2;

		end = _getch();
	}

	return 0;
}
