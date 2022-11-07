// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	double a, b,c,d,e,f;
	cout << "Jaka funkcje licze wybiez: \n";
	cout << "1.kwadratowa  \n";
	cout << "2.liniowa  \n";
	cin >> f;
	if (f==1)
	{

    cout << "Podaj współczynnik a funkcji w postaci ax2 + bx + c \n";
	cin >> a;
	
	cout << "Podaj współczynnik b funkcji w postaci ax2 + bx + c \n";
	cin >> b;
	cout << "Podaj współczynnik c funkcji w postaci ax2 + bx + c \n";
	cin >> c;
	d = b * b - 4 * a * c;
	if (a==0)
	{
		e = -c / b;
		cout << "\nmiejsce zerowe to x = " << e;
	}
	else
	{


	if (d < 0)
	{
		
			cout<< "Brak miejsc zerowych funkcji \n";
		

	}
	else
	{

	
		e = (-b - sqrt(d)) / 2 * a;
	cout << "\nmiejsce zerowe to x = " << e;
	e = (-b + sqrt(d)) / 2 * a;
	cout << "\nmiejsce zerowe to x = " << e;
	}

	}
	}
	else
	{
		cout << "Podaj współczynnik a funkcji w postaci ax + b \n";
		cin >> a;

		cout << "Podaj współczynnik b funkcji w postaci ax + b\n";
		cin >> b;
		e = -b / a;
		cout << "\nmiejsce zerowe to x = " << e;
	}

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
