#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	double a, b;

	cout << "Введите коэффициент А" << endl;
	cin >> a;
	cout << "Введите коэффициент B" << endl;
	cin >> b;

	if (a != 0)
	{
		cout << "Решением уравнения a*x - b = 0 является число " << -b / a << endl;
	}
	else
	{
		cout <<"Вы ввели не правильный коэффициент A! A не равен нулю!" << endl;
	}

	system("pause");
	return 0;
}
