 
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Podaj liczbê n: " << endl;
	cin >> n;

	for (int i = 0; i <= 100; i++) {
		if (i%n == 0)
			cout << i << endl;
	}
	
	
	
	
	
	
	
	/*for (int i = 0; i <= 100; i = i + 2) {
		cout << i << endl;
	}
	int x[9];
	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbê rzeczywist¹: " << endl;
		cin >> x[i];
			if (x[i] > 0) {
			cout << x[i] << endl; }}*/
}