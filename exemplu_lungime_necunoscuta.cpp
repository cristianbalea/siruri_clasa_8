/*
Cel mai mare numar din sir care are toate cifrele pare,
sirul are numar  necunoscut de elemente
*/
#include <iostream>

using namespace std;

int main()
{
    /*
    x - variabila in care o sa citim valorile din sir
    cx - variabila intermediara in care o sa salvam si modificam valoarea lui x
    nr - numarul de cifre impare pe care il gasim. Daca e 0, atunci toate cifrele sunt pare
    Max - initializam maximul cu o valoare mica si impara, spre exemplu 1.
    */
    int x, cx, nr, Max = 1;
    /*
    citim primul numar
    */
    cin >> x;
    /*
    daca numarul e diferit de 0, il vom testa si apoi citi in continuare
    */
    while(x != 0) {
        /* nr este initializat cu 0*/
        nr = 0;
        /* folosim variabila cx pentru a nu pierde valoarea lui x */
        cx = x;
        while(cx != 0) {
            /* testam fiecare cifra daca e para sau impara */
            if(cx % 2 == 1) {
                nr++;
            }
            cx = cx / 10;
        }
        /*
        Daca numarul nu are cifre impare si e mai mare decat maximul
        actual, atunci numarul devine noul maxim.
         */
        if(nr == 0 && x > Max) {
            Max = x;
        }
        cin >> x;
    }
    /*
    Daca variabila Max a ramas 1, nu am citit niciun numar cu toate cifrele pare
    */
    if(Max == 1) {
        cout << "Nu exista numere cu toate cifrele pare" << endl;
    } else {
        cout << Max;
    }
}
