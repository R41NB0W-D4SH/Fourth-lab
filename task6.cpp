#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double a1, b1, c1, a2, b2, c2, x, y, k;

	cout << "Введите коэффициент А для первого уравнения" << endl;
	cin >> a1;
	cout << "Введите коэффициент B для первого уравнения" << endl;
	cin >> b1;
	cout << "Введите коэффициент C для первого уравнения" << endl;
	cin >> c1;
	cout << "Введите коэффициент A для первого уравнения" << endl;
	cin >> a2;
	cout << "Введите коэффициент B для первого уравнения" << endl;
	cin >> b2;
	cout << "Введите коэффициент C для первого уравнения" << endl;
	cin >> c2;

	k = pow(a1 * b2 - b1 * a2, -1);
	x = k * (b2 * c1 - b1 * c2);
	y = k * ((-a2 * c1) + a1 * c2);

	cout << "X равен " << x << endl;
	cout << "Y равен " << y << endl;

	system("pause");
	return 0;
}
