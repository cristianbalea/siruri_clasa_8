/*
Calculati numarul de numere prime dintr-un sir citit de la tastatura, cu lungime cunoscuta.

Pseudocod: 
	citeste x

	ok <- 1 // presupunem ca numarul e prim
	pentru j <- 2, n/2
		daca x % j == 0 atunci // daca are un divizor in afara de 1 si el insusi nu e prim
			ok = 0	
	daca x = 0 sau x = 1 atunci ok <- 0
	
	daca ok = 1 atunci prim, nr <- nr + 1
		
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i, x, nr = 0;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> x;

        // TODO

        /*

        */


    }

    cout << "Numarul de numere prime din sir: " << nr;
}
