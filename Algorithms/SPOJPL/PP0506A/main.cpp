#include <iostream>
using namespace std;

int x[1000], y[1000];
string nazwy[1000];

void sort(int ile)
{
	bool flag = true;
	int temp;
	string temps;
	do
	{
		flag = true;
		for (int i = 1; i < ile; i++)
			if (x[i - 1] * x[i - 1] + y[i - 1] * y[i - 1] < x[i] * x[i] + y[i] * y[i])
			{
				flag = true;
				temp = x[i - 1];
				x[i - 1] = x[i];
				x[i] = temp;
				temp = y[i - 1];
				y[i - 1] = y[i];
				y[i] = temp;
				temps = nazwy[i - 1];
				nazwy[i - 1] = nazwy[i];
				nazwy[i] = temp;
			}
	} while (flag);
}

int main()
{
	int test, ile;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> ile;
		for (int j = 0; j < ile; j++)
		{
			cin >> nazwy[j] >> x[j] >> y[j];
		}
		sort(ile);
		for (int j = 0; i < ile; j++)
			cout << nazwy[i] << " " << x[i] << " " << y[i] << endl;
	}
	return 0;
}
