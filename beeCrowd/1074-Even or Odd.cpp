#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if(a == 0){
            cout << "NULL\n";
        }
        else{
            if(a%2 == 0) cout << "EVEN";
            else cout << "ODD";
        
            if(a<0) cout << " NEGATIVE\n";
            else cout << " POSITIVE\n";
        }
    }

    return 0;
}
