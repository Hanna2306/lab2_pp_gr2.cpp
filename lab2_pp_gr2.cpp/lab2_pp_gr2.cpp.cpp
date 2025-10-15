#include <stdio.h> //kod 02_13
using namespace std;
int main() {
    int fahr; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0

    
    
        for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
          {
          
            float celsius = (5/9)*(fahr - 32.0); // przy zmianie z 5.0/9.0 przestajemy otzrymywaæ logiczne wyniki
            printf("%3.0f %6.1f \n", fahr, celsius);
          }
    
   
   

    /*while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok*/
    }

	 
	
