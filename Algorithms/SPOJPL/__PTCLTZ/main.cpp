#include <iostream>
using namespace std;

int problem(int x, int n){
	if(x == 1) return n;
	else if(x % 2){
		return problem(3 * x + 1, n + 1);
	}
	else{
		return problem(x / 2, n + 1);
	}
}


int main() {
	int test, liczba;
	cin >> test;
	for(int i=0; i < test; i++){
		cin >> liczba;
		liczba = problem(liczba, 0);
		cout << liczba << endl;
	}
	
	return 0;
}
