#include <iostream>

using namespace std;

int main () {
    int startHour, startMinute, finalHour, finalMinute;

    cin >> startHour >> startMinute >> finalHour >> finalMinute;

    startHour = (startHour * 60) + startMinute;
    finalHour = (finalHour * 60) + finalMinute;

    if (startHour < finalHour){
        finalHour = finalHour - startHour;
        cout << "O JOGO DUROU "<< finalHour/60 << " HORA(S) E " << finalHour%60  << " MINUTO(S)" << endl;
    }

    else if (startHour > finalHour){
        finalHour = 1440 - (startHour - finalHour);
        cout << "O JOGO DUROU "<< finalHour/60 << " HORA(S) E " << finalHour%60  << " MINUTO(S)" << endl;
    }
    else if (startHour == finalHour){
        finalHour = 1440;
        cout << "O JOGO DUROU "<< finalHour/60 << " HORA(S) E " << finalHour%60  << " MINUTO(S)" << endl;
    }

}
