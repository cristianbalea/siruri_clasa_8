/*
CMMDC - cel mai mare divizor comun - de implementat individual
*/

#include <iostream>

using namespace std;

int main()
{
    int n, d, i, x;

    cin >> n >> d;

    for(i = 2; i <= n ; i++) {
        cin >> x;
        while(x != d) {
            if(x > d) {
                x = x - d;
            } else {
                d = d - x;
            }
        }
    }

    cout << d;
}
