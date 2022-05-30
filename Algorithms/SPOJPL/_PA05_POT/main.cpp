#include <iostream>
using namespace std;

int pot(int pods, int wykl){
	int temp=pods%10;
	pods=temp;
	for(int i=2;i<=wykl;i++){
		temp *= pods;
		temp %= 10;
		if(temp==pods){
			wykl %= i;
			break;
		}
	}
	if(temp==pods){
		for(int i=2; i<=wykl; i++){
			temp *= pods;
			temp %= 10;
		}
	}
	return temp;
}


int main() {
	int ile, pods, wykl;
	cin>>ile;
	for(int i=0;i<ile;i++){
		cin >> pods >> wykl;
		cout << pot(pods, wykl) << endl;
	}
	return 0;
}

