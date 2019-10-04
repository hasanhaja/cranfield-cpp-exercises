#include "vector.h"
using namespace std;

int main()
{
	Vector v;
	cout << "please input elements\n";
	double d;
	while (cin >> d) v.push_back(d);

	double d1 = v.one_norm();
	double d2 = v.two_norm();
	double d3 = v.uniform_norm();

	cout << v;


	cout << d1 << " " << d2 << " " << d3 << "\n";

	return 0;
}