 
#include <iostream>
using namespace std;
int main(){
	
	int n;
	cout << "Podaj liczbe n: " << endl;
	cin >> n;
	int a;
	a = 0;

	for(int i = 0;i <= 100;i++) {
		if (i % n == 0) {
			a = a + 1;
		}
	}
	cout << a;
	
	
	
}