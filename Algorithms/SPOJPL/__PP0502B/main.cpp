#include <iostream>
using namespace std;


int main() {
	int test, ile;
	cin>>test;
	for(int i=0; i<test;i++){
		cin>>ile;
		int output[ile];
		for(int j=ile-1; j>=0;j--)cin>>output[j];
		for(int j=0; j<ile;j++)cout<<output[j]<<" ";
		cout << endl;
	}
	return 0;
}
