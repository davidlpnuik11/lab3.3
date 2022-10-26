
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
		double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -4)
		y = -2;
	else
		if (-4 < x && x <= 0)
			y = (-5 / 2) * x - 10;
		else
			if (0 < x && x <= 2)
				y = x * x;
			else
				y = -2 * x + 4;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}