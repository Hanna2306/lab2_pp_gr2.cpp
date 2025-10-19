 
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {

	//zadanie 11

	/*int w;
	int a, b;
	cout << "Podaj a i b " << endl;
	cin >> a >> b;

	if(a > b) {
		w = a;
		cout << "Przedzia³ wynosi [" << b << ", " << a << "]" << endl;
		for(int i=b; i<+a; i++){
			if(i % 3 == 0)
				cout << i << endl;
		}
	}



	else if(b > a) {
		w = b;
		cout << "Przedzia³ wynosi [" << a << ", " << b << "]" << endl;
		for(int i=a; i<=b; i++){
			if(i % 3 == 0)
				cout << i << endl;
			;
		}
	}
	else
		cout << "Liczby s¹ równe" << endl; */


		//ZADANIE 12

	/*float n;
	cout << "Podaj n: " << endl;
	cin >> n;
	float w = 0;
	for (int i = 0; i <= n; i++) {
		w = w + i;
	}


	cout << "Suma podanych liczb wynosi: " << w << endl;
	float s;
	s = w / n;
	cout << "Srednia podanych liczb wynosi: " << s << endl;*/

	//zadanie 13

	/*for (int i = 100; i >= 0; i--)
		cout << i << endl;*/


		//zadanie 14
	/*int a, b, c;
	cout << "Podaj trzy liczbny" << endl;
	cin >> a >> b >> c;
	int n;
	if(a<b && a<c) {
		n = a;
	}
	else if(b<a && b<c) {
		n = b;
	}
	else {
		n = c;
	}
	cout << "Najmniejsza liczba to: " << n << endl; */


	//zadanie 15
	 /*srand(time(NULL));
	int n, m, t;
	cout << "Podaj liczbe do ktorej beda losowane: " << endl;
	cin >> m;
	cout << "Podaj ile ma zostaæ wylosowanych liczb: " << endl;
	cin >> n;

	for(int i=1; i<n; i++){
		t = (rand() % m) + 1;
		cout << "Wylosowana liczba to: " << t << endl;
	}

	n = (rand() % m) + 1;
	cout << "Wylosowana liczba to: " << n;*/


	//zadanie 16

	/*int n, t, r;
	r = 0;
	cout << "Podaj szczesliwy numer z przedzialu 1-10: " << endl;
	cin >> n;

	for (int i = 1; i <= 10; i++) {
		t = (rand() % 10) + 1;
		//cout << t << endl; sprawdzenie czy dobrze liczy
		if (t == n)
			r = r + 1;
	}
	cout << "Podczas 10 loswoan " << n << " pojawilo sie " << r << " razy." << endl;*/

	return 0;
}}