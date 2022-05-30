#include <iostream>
#include <string>
using namespace std;

int skarbfinder(int wskazowki){
	int x=0, y=0, kierunek, kroki;
	
	for(int i=0; i<wskazowki;i++){
		cin >> kierunek >> kroki;
		switch(kierunek){
			case 0:
				y += kroki;
				break;
			case 1:
				y -= kroki;
				break;
			case 2:
				x -= kroki;
				break;
			case 3:
				x += kroki;
				break;
		}
	}
	if(x==0&&y==0)cout<<"studnia"<<endl;
	else{
		if(y<0) cout<<1<<" "<<y*-1<<endl;
		else if(y>0) cout<<0<<" "<<y<<endl;
		if(x<0) cout<<2<<" "<<x*-1<<endl;
		else if(x>0) cout<<3<<" "<<x<<endl;
	}
	
	
	return 0;
}

int main() {
	int test, wskazowki;
	cin >> test;
	for(int i=0; i<test; i++){
		cin >> wskazowki;
		skarbfinder(wskazowki);
	}
	return 0;
}
