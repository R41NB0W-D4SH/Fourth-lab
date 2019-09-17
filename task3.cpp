#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double a, x, y, d, e;
	cout << "Введите цену за купленные конфеты ";
	cin >> a;
	cout << "Введите количество кг, которые купили ";
	cin >> x;

	d = a / x;

	cout << "Введите количество кг, которое хотите купить ";
	cin >> y;

	e = d * y;

	cout << "Стоимость за " << y << " кг конфет составляет "<< e <<" септимов"<< endl;

	system("pause");
	return 0;
}
