// Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int time, hour, min, sec;
 cin >> time;
 hour = (time/60)/60;
 min = (time/60)%60;
 sec = time%60;
 cout << hour<<":" << min << ":" << sec << endl;
    
    return 0;
}
