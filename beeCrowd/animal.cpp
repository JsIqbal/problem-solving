#include <bits/stdc++.h>

using namespace std;

int main() {
  string animal;

  cin >> animal;

  if (animal == "vertebrado") {
    cin >> animal;

    if (animal == "ave") {
      cin >> animal;
      if (animal == "carnivoro") {
        cout << "aguia" << endl;
      } else if (animal == "onivoro") {
        cout << "pomba" << endl;
      }

    } else if (animal == "mamifero") {
      cin >> animal;
      if (animal == "onivoro") {
        cout << "homem" << endl;
      } else if (animal == "herbivoro") {
        cout << "vaca" << endl;
      }
    }
  }

  if (animal == "invertebrado") {
    cin >> animal;

    if (animal == "inseto") {
      cin >> animal;
      if (animal == "hematofago") {
        cout << "pulga" << endl;
      } else if (animal == "herbivoro") {
        cout << "lagarta" << endl;
      }

    } else if (animal == "anelideo") {
      cin >> animal;
      if (animal == "hematofago") {
        cout << "sanguessuga" << endl;
      } else if (animal == "onivoro") {
        cout << "minhoca" << endl;
      }
    }
  }

  return 0;
}
