#include <iostream>
using namespace std;

int oblicz_dlugosc(int liczba){
	int output=0;
	do{	output++;
		liczba/=10;
	}while(liczba);
	return output;
}

int pot(int podstawa, int wykladnik){
	if (wykladnik==0)return 1;
	else return pot(podstawa, wykladnik-1) * podstawa;
}

int oblicz_cyfre(int liczba, int cyfra){
	int rzad = pot(10, cyfra), output = liczba % rzad, minus;
	for(int i=0; i < cyfra; i++){
		minus = (liczba % pot(10, i));
	}
	output -= minus;
	output /= rzad/10;
	return output;
}

int oblicz_palidrom(int liczba){
	int dlugosc = oblicz_dlugosc(liczba), output=0;
	for(int i=dlugosc; i>=1;i--) {
		output += oblicz_cyfre(liczba, i) * pot(10, dlugosc-i);
	}
	return output;
}

int main() {
	int test, liczba, cyfra, palidrom, ile_dodawan;
	cin>>test;
	for(int i=0; i<test; i++){
		palidrom=0;
		ile_dodawan=-1;
		cin >> liczba;
		do{
			ile_dodawan++;
			liczba+=palidrom;
			palidrom=oblicz_palidrom(liczba);
		}while(palidrom!=liczba);
	cout<<liczba<<" "<<ile_dodawan<<endl;

	}
	return 0;
}
