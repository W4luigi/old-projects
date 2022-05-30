#include <iostream>
using namespace std;

int main() {
	int ilu, output=0, temp;
	cin >> ilu;
	
	int sprawdzeni[ilu+1], po_lewej[ilu+1];
	for(int i=1; i<=ilu; i++){
		cin>>po_lewej[i];
		sprawdzeni[i]=1;
	}
	for(int i=1; i<=ilu; i++){
		if(sprawdzeni[i]){
			output++;
			temp=i;
			while(sprawdzeni[temp]){
				sprawdzeni[temp]=0;
				temp = po_lewej[temp];
			}
		}
	}
	cout << output;

	return 0;
}
