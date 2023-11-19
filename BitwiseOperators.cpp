#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a&&b" << (a & b) << " " << endl;
    cout << "a||b" << (a | b) << " " << endl;
    cout << "~a" << (~a) << " " << endl;
    cout << "a^b" << (a ^ b) << " " << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;

    int i = 7;
    cout << (++i) << endl;
    // phle bda fir print so i=8
    cout << (i++) << endl;
    // phle print that is 8 and then increase 9
    cout << (i--) << endl;
    // phle print hua that is 9 and then decrease 8
    cout << (--i) << endl;
    // phle decreases to 7 then print hua 7

    return 0;
}