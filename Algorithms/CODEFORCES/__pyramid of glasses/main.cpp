#include <iostream>
using namespace std;

int main() {
	int h, t, output=0, max=512;
	cin>>h>>t;
	int kieliszki[h][h];
	for(int i=1; i<=h; i++) for(int j=1; j<=i; j++) kieliszki[i][j]=0;
	kieliszki[1][1]=max*t;
	for(int i=1; i<=h; i++) for(int j=1; j<=i; j++){
		if(kieliszki[i][j]>=max){
			output++;
			if(i<h){
				kieliszki[i+1][j]+=(kieliszki[i][j]-512)/2;
				kieliszki[i+1][j+1]+=(kieliszki[i][j]-512)/2;
			}
		}
	}
	cout << output;
	return 0;
}
