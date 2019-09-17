#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a;
	double r, pi = 3.14;
	cout << "Введите угол а в градусах" << endl;
	cin >> a;

	if (a > 0 && a < 360)
	{
		r = (a * pi) / 180;

		cout << "Угол а равный " << a << ", в радианах равен " << r << endl;
	}
	else
		cout << "Заданный угол не в входит в промежуток от 0 до 360" << endl;

	system("pause");
	return 0;
}
