#include<iostream>
#include<iomanip>
using namespace std;



int main()
{

	string version="Version 1.3";
	string end="w";
	int eingabe;
	int erg1 = 1;
	int r1 = 2;

	
	while (end == "w")
	{


		system("cls");
		cout << version << setw(86) << " ";
		system("chcp 1252");




		cout << endl << endl << endl << endl << endl;

		cout << "   <<< GIB EINE BELIEBIGE GANZZAHL EIN und bestätige mit ENTER, UM ZU SCHAUEN OB ES SICH UM EINE PRIMZAHL HANDELT >>>";
		cout << endl;
		cin >> eingabe;

		cout << endl << endl << endl << endl << endl;
		cout << setw(65) << "BERECHNUNGSBASIS: " << "[  " << eingabe << "  ]";
		cout << endl << endl << endl;



		for (; erg1 = eingabe % r1 > 0; r1++)
		{

			

		}

		

		if (r1 == eingabe)
		{



			cout << "ERGEBNIS: " << endl << setfill('_') << setw(120) << "_" << endl << endl << setfill(' ') << " " << setw(68) << "IST  EINE  PRIMZAHL" << endl << setfill('_') << setw(120) << "_" << endl << endl << endl << endl << setfill('_') << setw(58) << "_";
			cout << endl << endl << "Divisor hochgezählt bis: " << r1 << endl << setfill('_') << setw(58) << "_" << endl << endl << endl << endl << setfill('_') << setw(58) << "_" << endl << endl;
			cout << "Berechnungsbasis [Modulo] aktuellem Divisor: " << eingabe % r1;
			cout << setfill('_') << endl << setw(58) << "_";



		}

		else
		{

			cout << "ERGEBNIS: " << endl << setfill('_') << setw(120) << "_" << endl << endl << setfill(' ') << " " << setw(68) << "IST  KEINE  PRIMZAHL" << endl << setfill('_') << setw(120) << "_" << endl << endl << endl << endl << setfill('_') << setw(58) << "_";
			cout << endl << endl << "Divisor hochgezählt bis: " << r1 << endl << setfill('_') << setw(58) << "_" << endl << endl << endl << endl << setfill('_') << setw(58) << "_" << endl << endl;
			cout << "Berechnungsbasis [Modulo] aktuellem Divisor: " << eingabe % r1;
			cout << setfill('_') << endl << setw(58) << "_";





		}


		cout << endl << endl << endl << endl << "Tippe [w] und bestätige mit [ENTER] um eine andere Zahl zu berechnen, oder eine beliebige andere Taste um zu beenden!";

		cout << endl << setfill(' ') << setw(172) << " " << version << endl;

		erg1 = 1;
		r1 = 2;

		cin >> end;

		
		

	}
	
	


	return 0;

}