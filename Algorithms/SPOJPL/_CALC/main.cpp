#include <iostream>
using namespace std;

int main() {
	int a, b, output;
	string c;
	for(int i=0; i<100; i++){
		cin >> c >> a >> b;
		if(c=="+") output = a+b;
		else if(c=="-") output = a-b;
		else if(c=="*") output = a*b;
		else if(c=="/") output = a/b;
		else if(c=="%") output = a%b; 
		cout << output << endl;
	}
	return 0;
}
