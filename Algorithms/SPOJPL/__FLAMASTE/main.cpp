#include <iostream>
#include <string>
using namespace std;


int flamaster(string input){
	int counter, len = input.length(), j;
	for(int i=0; i<len;i++){
		counter=0;
		for(j=i; j<len; j++){
			if(input[i]!=input[j]) break;
			else if(input[i]==input[j]){
				counter++;
			}
		}
		if(counter==1){
			cout << input[i];
		}
		else if(counter==2){
			cout << input[i] << input[i];
		}
		else{
			cout << input[i] << counter;
		}
		i=j-1;
	}
	cout << endl;
	return 0;
}

int main() {
	int ile;
	string input;
	cin>>ile;
	for(int i=0; i<ile; i++){
		cin>>input;
		flamaster(input);
	}
	
	return 0;
}
