#include <iostream>
using namespace std;

int main() {
	int ile, liczba;
	string output;
	cin >> ile;
	for(int i = 0; i < ile; i++){
		cin >> liczba;
		if(liczba == 1) cout << "NIE" << endl;
		else{
			output = "TAK";
			for(int j = 2; j < liczba; j++){
				if(liczba % j == 0){
					output = "NIE";
					break; 
				}
			}
			cout << output << endl;
		}
	}

	return 0;
}
