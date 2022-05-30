#include <iostream>
using namespace std;

int rol(int ile){
	int output[ile];
	cin >> output[ile];
	for(int i=0; i<ile-1;i++){
		cin >> output[i];
		cout << output[i] << " ";
	}
	cout << output[ile] << endl;
	return 0;
}


int main() {
	int test, ile;
	cin >> test;
	for(int i=0; i<test; i++){
		cin >> ile;
		rol(ile);
	}

	return 0;
}
