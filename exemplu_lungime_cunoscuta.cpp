/*
Algoritm pentru prelucrare sirurilor cu numar cunoscut de elemente
*/
#include <iostream>

using namespace std;

int main() {
    /*
    n - citim si pastram in aceasta variabila numarul de numere pe care le vom citi
    i - contor pentru bucla repetitiva for
    x - citim in variabila x cate o valoare din sir
    nr - numarul de valori din sir care sunt puteri ale lui 2, initial e 0
    */
    int n, i, x, nr = 0;

     /* citim numarul de numere din sir */
    cin >> n;

    for(i = 0; i < n; i++) {
        /* citim n valori*/
        cin >> x;

        /* pentru fiecare valoare, aplicam algoritmul */

        /* cat timp numarul e par, il impartim la 2 */
        while(x % 2 == 0) {
            x = x / 2;

            /*
            Daca am ajuns la 1, inseamna ca numarul este format
            doar din termeni de 2, si incrementam variabila nr.
            */
            if(x == 1) {
                nr++;
            }
        }

    }

    cout << nr; /* afisam numarul de valori de puteri ale lui 2*/
}
