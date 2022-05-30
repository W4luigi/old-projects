#include <iostream>
using namespace std;

int main() {
	int ile, liczba, silnia;
	cin >> ile;
	for(int j = 0; j < ile; j++){
		cin >> liczba;
		if(liczba < 10){
			silnia = 1;
			for(int i = 1; i <= liczba; i++){
				silnia *= i;
			}
			int d = silnia % 10, p = ((silnia % 100) - d) / 10;
			cout << p << " " << d << endl;
		}
		else{
			cout << "0 0" << endl;
		}
	}

	return 0;
}
