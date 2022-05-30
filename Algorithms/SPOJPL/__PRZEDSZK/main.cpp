#include <iostream>
using namespace std;

int main() {
	int ile, g1, g2;
	cin >> ile;
	for(int j=0; j<ile; j++){
		cin >> g1 >> g2;
		for(int i=2; true; i++){
			if(i%g1==0&&i%g2==0){
				cout << i << endl;
				break;
			}
		}
	}
	
	return 0;
}
