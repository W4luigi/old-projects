#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double r, p, d;
	cin >> r >> d;
	p = ((r*r) - (d*d/4))* 3.141592654;
	cout <<setprecision(1000) << p << endl;
	return 0;
}
