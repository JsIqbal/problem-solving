#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, even=0;
    
    for (int i=0; i<5; i++) {
        cin >> num;
        if (num%2 == 0) {
            even++;
        }
    }
    
    cout << even << " valores pares" << endl;
    
    return 0;
}
