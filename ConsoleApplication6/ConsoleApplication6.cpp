// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int a, b, S;
	cout << "Vvodim storony a";
	cin >> a;
	cout << "Vvodim storony b";
	cin >> b;
	if (a > 0 && b > 0)
	{
		S = a * b;
		cout << "Ploshyad' =" << S << endl;

	}
	else
	{
		cout << "VvedenbIe dannbIe ne vernbI" << endl;
	}
	system("Pause");
    return 0;
}

