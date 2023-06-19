/*
Read 4 integer values A, B, C and D.
    C and D were positives values
    A is even, 

    Then if B is greater than C
    D is greater than A

    the sum of C and D is greater than the sum of A and B

    write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted)
*/

#include <iostream>
 
using namespace std;
 
int main() {
 
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    if (C > 0 && D > ) {
        if (A%2 == 0) {
            if (B > C && D > A) {
                if ((C + D) > (A + B)) {
                    cout << "Valores aceitos" << endl;
                }
                else {
                    cout << "Valores nao aceitos" << endl;
                }
            }
            else {
                cout << "Valores nao aceitos" << endl;
            }
        }
        else {
            cout << "Valores nao aceitos" << endl;
        }
    }
    else {
        cout << "Valores nao aceitos" << endl;
    }
 
    return 0;
}