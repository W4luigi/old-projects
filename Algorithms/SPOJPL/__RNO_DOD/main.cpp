#include <iostream>
using namespace std;

int main() {
	int ile, jle, suma;
	cin >> ile;
	for(int i=0; i < ile; i++){
		suma = 0;
		cin >> jle;
		int liczba;
		for(int j = 0; j < jle; j++){
			cin >> liczba;
			suma += liczba;
		}
		cout << suma << endl;
	}
	
	return 0;
}
