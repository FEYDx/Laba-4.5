#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y;
	int R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (y <= 0 && x <= 0 && y >= -x - R ||
			x >= 0 && y >= 0 && x * x + y * y <= R * R)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			cout << "R = "; cin >> R;
			x = -R + rand() % (R + R + 1);
			y = -R + rand() % (R + R + 1);
			if (y <= 0 && x <= 0 && y >= -x - R ||
				x >= 0 && y >= 0 && x * x + y * y <= R * R)
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}