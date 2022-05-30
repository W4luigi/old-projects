#include <iostream>
using namespace std;

int main() {
	int ile_krow, ile_pytan; //n, q;
	cin>>ile_krow>>ile_pytan;
	int krowy[ile_krow];
	for(int i=0; i<ile_krow;i++)cin>>krowy[i];
	for(int i=0; i<ile_pytan;i++){
		int poczatek, koniec, a=0,b=0,c=0;
		cin>>poczatek>>koniec;
		poczatek--;
		for(;poczatek<koniec;poczatek++){
			switch(krowy[poczatek]){
				case 1:
					a++;
					break;
				case 2:
					b++;
					break;
				case 3:
					c++;
					break;
			}
		}
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
