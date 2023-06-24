#include <iostream>
 
using namespace std;
 
int main() {
 
    double notex;
    int calx, note;
    
    cin >> notex;
  
    note = notex * 100;

    
    cout << "NOTAS:" << endl;
    cout << note/10000 << " nota(s) de R$ 100.00" << endl;
    
    calx = note%10000;
    
    cout << calx/5000 << " nota(s) de R$ 50.00" << endl;
    
    calx = calx%5000;
    
    cout << calx/2000 << " nota(s) de R$ 20.00" << endl;
    
    calx = calx%2000;
    
    cout << calx/1000 << " nota(s) de R$ 10.00" << endl;
    
    calx = calx%1000;
    
    cout << calx/500 << " nota(s) de R$ 5.00" << endl;
    
    calx = calx%500;
    
    cout << calx/200 << " nota(s) de R$ 2.00" << endl;
    
    calx = calx%200;
    
    cout << "MOEDAS:" << endl;
    
    cout << calx/100 << " moeda(s) de R$ 1.00" << endl;
    
    calx = calx%100;
    
    cout << calx/50 << " moeda(s) de R$ 0.50" << endl;
    
    calx = calx%50;
    
    cout << calx/25 << " moeda(s) de R$ 0.25" << endl;
    
     calx = calx%25;
    
    cout << calx/10 << " moeda(s) de R$ 0.10" << endl;
    
    calx = calx%10;
    
    cout << calx/5 << " moeda(s) de R$ 0.05" << endl;
    
    calx = calx%5;
    
    cout << calx/1 << " moeda(s) de R$ 0.01" << endl;
    
    return 0;
}
