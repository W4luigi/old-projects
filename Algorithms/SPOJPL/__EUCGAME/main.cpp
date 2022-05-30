#include <iostream>
using namespace std;

int eucgame(){
	int a,b, c=0;
	cin>>a>>b;
	while(a && b){
		if(a==b)break;
		else if(a<b)b-=a;
		else a-=b;
	}
	cout << a+b<<endl;
}

int main() {
	int test;
	cin>>test;
	for(int i=0;i<test;i++) eucgame();
	return 0;
}
