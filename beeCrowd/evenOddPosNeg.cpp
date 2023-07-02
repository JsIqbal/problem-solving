#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, even=0, odd=0, pos=0, neg=0;
    
    for (int i=0; i<5; i++) {
        cin >> num;
        if (num%2 == 0) {
            even++;
        }
        if (num < 0) {
            neg++;
        }
        if (num%2 != 0) {
            odd++;
        }
        if (num > 0) {
            pos++;
        }
    }
    
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
    
    return 0;
}
