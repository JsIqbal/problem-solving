#include <iostream>

using namespace std;

int main() {

  int num;
  cin >> num;

  if (num == 61 || num == 71 || num == 11 || num == 21 || num == 32 || num == 19 || num == 27 || num == 31) {
    if (num == 61) {
      cout << "Brasilia" << endl;
    } else if (num == 71) {
      cout << "Salvador" << endl;
    } else if (num == 11) {
      cout << "Sao Paulo" << endl;
    } else if (num == 21) {
      cout << "Rio de Janeiro" << endl;
    } else if (num == 32) {
      cout << "Juiz de Fora" << endl;
    } else if (num == 19) {
      cout << "Campinas" << endl;
    } else if (num == 27) {
      cout << "Vitoria" << endl;
    } else if (num == 31) {
      cout << "Belo Horizonte" << endl;
    }
  } else {
    cout << "DDD nao cadastrado" << endl;
  }

  return 0;
}
