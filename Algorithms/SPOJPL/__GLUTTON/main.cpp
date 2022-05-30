#include <iostream>
using namespace std;
                                                    
int glutton(int ilu, int pudelka){
	int ciastka = 0, uczestnik;
	for(int i=0; i<ilu; i++){
		cin >> uczestnik;
		ciastka += 24 * 60 * 60 / uczestnik;
	}
	if(ciastka%pudelka) return (ciastka / pudelka) +1;
	else return (ciastka / pudelka);
}

int main() {
	int testy, ilu, pudelka;
	cin >> testy;
	for (int i=0; i < testy; i++) {
		cin >> ilu >> pudelka;
		cout << glutton(ilu, pudelka) << endl;
	}
	return 0;
}
