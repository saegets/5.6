#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y);

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = (k(1 + p * p, 1 - q * q) - pow(k(1, p * q), 2)) / (1 + k(p * q, 1));

	cout << "c = " << c << endl;

	return 0;
}
double k(const double x, const double y)
{
	return (sin(x) / (x * x + y * y) + cos(y) / (1 + abs(x * y)));
}