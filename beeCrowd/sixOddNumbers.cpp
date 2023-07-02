#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    if (num >=1 && num <= 1000) {
        for (int i=num; i <= num+11; i++) {
            if (i%2 == 1) {
                cout << i << endl;
            }
        }
    }
    
    return 0;
}
