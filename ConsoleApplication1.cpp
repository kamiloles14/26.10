// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	double a, b,c,d,e,f,g,p,q;
	cout << "Jaka funkcje licze wybiez: \n";
	cout << "1.kwadratowa  \n";
	cout << "2.liniowa  \n";
	cout << "3.postac kanoniczna f.kwadratowa   \n";
	cout << "4.zamiana postaci funkcji kwadratowa   \n";

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
	if (f == 2)
	{
		cout << "Podaj współczynnik a funkcji w postaci ax + b \n";
		cin >> a;

		cout << "Podaj współczynnik b funkcji w postaci ax + b\n";
		cin >> b;
		e = -b / a;
		cout << "\nmiejsce zerowe to x = " << e;
	}
	if (f == 3) 
	{
		cout << "Podaj współczynnik a funkcji w postaci y= a(x-p)^2+q \n";
		cin >> a;

		cout << "Podaj współczynnik p funkcji w postaci y= a(x-p)^2+q\n";
		cin >> b;
		cout << "Podaj współczynnik q funkcji w postaci y= a(x-p)^2+q\n";
		cin >> c;
		if ((-c/a) <0)
		{
			cout << "Brak miejsc zerowych funkcji\n";
		}
		else
		{

		e = b + sqrt(-c / a);
		cout << "\nmiejsce zerowe to x = " << e;
		e = b - sqrt(-c / a);
		cout << "\nmiejsce zerowe to x = " << e;

		}

	}
	if (f == 4)
	{
		cout << "\nZ jakiej funkcji na jaką chcesz zamienic? " ;
		cout << "\n1.Ogolna -> kanoniczna ";
		cout << "\n2.Ogolna -> iloczynowa ";
		cout << "\n3.Kanoniczna -> iloczynowa ";
		cout << "\n4.Kanoniczna -> ogólna ";
		cout << "\n5.Iloczynowa -> kanoniczna ";
		cout << "\n6.Iloczynowa -> ogólna ";
		cin >> g;
		if (g==1 || g==2)
		{
			cout << "Podaj wspołczynnik a funkcji w postaci ax2 + bx + c \n";
			cin >> a;

			cout << "Podaj wspołczynnik b funkcji w postaci ax2 + bx + c \n";
			cin >> b;
			cout << "Podaj wspołczynnik c funkcji w postaci ax2 + bx + c \n";
			cin >> c;
			d = b * b - 4 * a * c;
			if (g==1)
			{

			p = -b / 2 * a;
			q = -d / 4 * a;
			cout << "Postac kanoniczna  funkcji wynosi f(x)= "<<a<<"(x-"<<p<<")^2 + "<<q<<" \n";
			}
			if (g == 2)
			{
				if (d<0)
				{
					cout << "Postac iloczynowa  funkcji nie do okreslenia poniewaz brak miejsc zerowych funkcji \n";
				}
				else
				{

				p = (-b - sqrt(d)) / 2 * a;
				q = (-b + sqrt(d)) / 2 * a;

				cout << "Postac iloczynowa  funkcji wynosi f(x)= " << a << "(x-" << p << ") * (x-" << q << ") \n";
				}
			}


		}
		if (g == 3 || g == 4)
		{
			cout << "Podaj wspołczynnik a funkcji w postaci y= a(x-p)^2+q \n";
			cin >> a;

			cout << "Podaj wspołczynnik p funkcji w postaci y= a(x-p)^2+q\n";
			cin >> p;
			cout << "Podaj wspołczynnik q funkcji w postaci y= a(x-p)^2+q\n";
			cin >> q;
			b = -2 * a*p;
			c = a * p * 2 + q;
			if (g==4)
			{

			cout << "Postac ogolna  funkcji wynosi f(x)= " << a << "x^2 +" <<b << "x +" << c << " \n";
			}
			if (g == 3)
			{
				d = b * b - 4 * a * c;
				if (d < 0)
				{
					cout << "Postac iloczynowa  funkcji nie do okreslenia poniewaz brak miejsc zerowych funkcji \n";
				}
				else
				{
					p = (-b - sqrt(d)) / 2 * a;
					q = (-b + sqrt(d)) / 2 * a;

					cout << "Postac iloczynowa  funkcji wynosi f(x)= " << a << "(x-" << p << ") * (x-" << q << ") \n";
				}
			}
		}
		if (g == 5 || g == 6)
		{
			cout << "Podaj wspołczynnik a funkcji w postaci y= a(x-x1)*(x-x2) \n";
			cin >> a;
			cout << "Podaj wspołczynnik x1 funkcji w postaci y= a(x-x1)*(x-x2) \n";
			cin >> p;
			cout << "Podaj wspołczynnik x2 funkcji w postaci y= a(x-x1)*(x-x2) \n";
			cin >> q;
			b = a * (-p - q);
			c = a * (p + q);
			if (g == 6)
			{

				cout << "Postac ogolna  funkcji wynosi f(x)= " << a << "x^2 +" << b << "x +" << c << " \n";
			}
			if (g == 5)
			{
				d = b * b - 4 * a * c;
				p = -b / 2 * a;
				q = -d / 4 * a;
				cout << "Postac kanoniczna  funkcji wynosi f(x)= " << a << "(x-" << p << ")^2 + " << q << " \n";
			}

		}


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
