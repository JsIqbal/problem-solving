#include <bits/stdc++.h>
using namespace std;

int main() {
    float n1, n2, n3, n4, n5, avg;
    
    cin >> n1 >> n2 >> n3 >> n4;
    
    avg = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;
    
    if (avg >= 7.0) {
        cout << "Media: " << fixed << setprecision(1) << avg << endl;
        cout << "Aluno aprovado." << endl;
    }
    
    else if (avg < 5.0) {
        cout << "Media: " << fixed << setprecision(1) << avg << endl;
        cout << "Aluno reprovado." << endl;
    }
    
    else if (avg >= 5.00 && avg <= 6.9) {
        cout << "Media: " << fixed << setprecision(1) << avg << endl;
        cout << "Aluno em exame." << endl;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        if ((avg + n5)/2 >= 5.0) {
            
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << (avg + n5)/2 << endl;
        }
        else if ((avg + n5)/2 <= 4.9) {
            cout << "Media: " << fixed << setprecision(1) << avg << endl;
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << (avg + n5)/2 << endl;
        }
        
    }
    return 0;
}
