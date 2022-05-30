#include <iostream>
using namespace std;
//7 2 2 2 5 3 7
int main() {
	int n, m, k;
	cin >> n>> m >>k;
	int output[n], r[m], l[m];
	for(int i=0;i<n;i++) output[i]=i+1;
	for(int i=0;i<m;i++) {cin >>l[i] >> r[i]; l[i]--; r[i]--;}
	for(int j=0;j<k;j++){
		for(int o=0; o<m; o++){
			for(int i=0; i<=(r[o]-l[o])/2;i++){
				int t=output[l[o]+i];
				output[l[o]+i]=output[r[o]-i];
				output[r[o]-i]=t;
			}
		}
	}
	for(int i=0; i<n;i++) cout<<output[i]<<" ";
	return 0;
}
