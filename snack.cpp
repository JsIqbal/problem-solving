#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c, d, e;
    int x, y;
    a = 4.00;
    b = 4.50;
    c = 5.00;
    d = 2.00;
    e = 1.50;
    
    cin >> x >> y;
    
    if (x == 1) {
        cout << "Total: R$ " << fixed << setprecision(2) << y * a  << endl;
    }
    if (x == 2) {
        cout << "Total: R$ " << fixed << setprecision(2) << y * b << endl;
    }
    if (x == 3) {
        cout << "Total: R$ " << fixed << setprecision(2) << y * c << endl;
    }
    if (x == 4) {
        cout << "Total: R$ " << fixed << setprecision(2) << y * d << endl;
    }
    if (x == 5) {
        cout << "Total: R$ " << fixed << setprecision(2) << y * e << endl;
    }

    return 0;
}
