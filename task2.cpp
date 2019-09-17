  #include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a;
	double r, pi = 3.14;
	cout << "Введите угол а в радианах" << endl;
	cin >> r;

	if (r > 0 && r < (2 * pi))
	{
		a = (r * 180) / pi;

		cout << "Угол а равный в радианах " << r << ", в градусах равен " << a << endl;
	}
	else
		cout << "Заданный угол не в входит в промежуток от 0 до 2*pi" << endl;

	system("pause");
	return 0;
}
