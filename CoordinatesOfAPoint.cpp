#include <iostream>
 
using namespace std;
 
int main() {
 
    float x, y;
    
    cin >> x >> y;
    
    if (x == 0.00 && y == 0.00) {
        cout << "Origem"<< endl;
    }
    else if (x == 0.00) {
            cout << "Eixo Y" << endl;
    } 
    
    else if (y == 0.00) {
        cout << "Eixo X" << endl;
        
    }
    
    else if (x > 0.00 && y> 0.00) {
        
        cout << "Q1"<< endl;
    }
    else if (x < 0.00 && y >0.00) {
        cout << "Q2"<< endl;
        
    }
    else if (x > 0.00 && y < 0.00) {
        cout << "Q4"<< endl;
      
    }
    else {
        cout << "Q3"<< endl;
        
    }
    
 
    return 0;
}
