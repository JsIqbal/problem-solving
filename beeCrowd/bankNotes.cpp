// In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. 
// The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.

#include <iostream>
 
using namespace std;
 
int main() {
 
    int note, calx;
    
    cin >> note;
    
    cout << note << endl;
    cout << note/100 << " nota(s) de R$ 100,00" << endl;
    
    calx = note%100;
    
    cout << calx/50 << " nota(s) de R$ 50,00" << endl;
    
    calx = calx%50;
    
    cout << calx/20 << " nota(s) de R$ 20,00" << endl;
    
    calx = calx%20;
    
    cout << calx/10 << " nota(s) de R$ 10,00" << endl;
    
    calx = calx%10;
    
    cout << calx/5 << " nota(s) de R$ 5,00" << endl;
    
    calx = calx%5;
    
    cout << calx/2 << " nota(s) de R$ 2,00" << endl;
    
    calx = calx%2;
    
    cout << calx/1 << " nota(s) de R$ 1,00" << endl;
    
    
    
    return 0;
}
