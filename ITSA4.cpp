#include <iostream>
using namespace std;

int main()
{
    int sH = 0, sM = 0, eH = 0, eM = 0;

    cin >> sH >> sM;
    cin >> eH >> eM;
    int time = (eH * 60 + eM) - (sH * 60 + sM);
    if (time <= 120 && time >= 0) {
        cout << time / 30 * 30 << endl;
    }
    else if (time > 120 && time <= 240) {
        cout << (time - 120) / 30 * 40 + 120 << endl;
    }
    else {
        cout << (time - 240) / 30 * 60 + 120 + 160 << endl;
    }
    return 0;
}