#include <iostream>
using namespace std;

int nwd(int a, int b){
	int c=a%b;
		while(c){
			a=b;
			b=c;
			c=a%b;
		}
	return b;
}

int main() {
	int ile, a, b;
	cin >>ile;
	for(int i=0; i<ile; i++){
		cin >> a >> b;
		cout << nwd(a, b) << endl;
	}
	return 0;
}
