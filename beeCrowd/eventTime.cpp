#include <bits/stdc++.h>
using namespace std;

int main() {
    string temp;
    int startDay, startHr, startMin, startSec, endDay, endHr, endMin, endSec, day, min, hr, sec;
    
    cin >> temp >> startDay;
    cin >> startHr >> temp >> startMin >> temp >> startSec;
    cin >> temp >> endDay;
    cin >> endHr >> temp >> endMin >> temp >> endSec;
    
    day = endDay - startDay;
    hr = endHr - startHr;
    min = endMin - startMin;
    sec = endSec - startSec;
    
    if (sec < 0) {
        sec += 60;
        min --;
    }
    if (min < 0) {
        min += 60;
        hr--;
    }
    if (hr < 0) {
        hr += 24;
        day --;
    }
    
    cout << day << " dia(s)" << endl;
    cout << hr << " hora(s)" << endl;
    cout << min << " minuto(s)" << endl;
    cout << sec << " segundo(s)" << endl;
    
    return 0;
}
