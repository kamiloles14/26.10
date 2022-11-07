// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b,c,d;
    cout << "Podaj współczynnik a funkcji w postaci Ax + By + C\n";
	cin >> a;
	
	cout << "Podaj współczynnik b funkcji w postaci Ax + By + C\n";
	cin >> b;
	cout << "Podaj współczynnik c funkcji w postaci Ax + By + C\n";
	cin >> c;
	
	if (a == 0)
	{
		if (c==0)
		{
			cout << "Nieskonczenie wiele miejsc zerowych funkcji liniowej\n";
		}
		else {
			cout<< "Brak miejsc zerowych funkcji liniowej\n";
		}

	}
	else
	{

	
	d = -1 * c / a;
	cout << "miejsce zerowe to x = " << c;
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
