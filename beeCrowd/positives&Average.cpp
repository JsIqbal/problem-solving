#include <bits/stdc++.h>
using namespace std;

int main() {
    float num, pos=0, avg=0;
    
    for (int i=0; i<6; i++) {
        cin >> num;
        if (num > 0) {
            avg = avg + num;
            pos++;
        }
    }
    avg = avg/pos;
    
    cout << pos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << avg << endl;
    
    return 0;
}
