#include <bits/stdc++.h>
using namespace std;

int main() {
    float b, a, c, r1, r2, d, e;
    
    cin >> a >> b >> c;
    
    d = (pow(b,2)) - (4 * a * c);
    
    if (d < 0 || a == 0) {
        cout << "Impossivel calcular" << endl;
    }
    
    else {
        e = sqrt(d);
        
        r1 = (-b + e)/(2*a);
        cout << "R1 = "   << fixed << setprecision(5) << r1 << endl;
        
        r2 = (-b - e)/(2*a);
        cout << "R2 = "   << fixed << setprecision(5) << r2 << endl;
    }

    return 0;
}
