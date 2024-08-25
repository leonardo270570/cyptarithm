#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // THE BEST OF ME SHOTS
    strItems = "THEBSOFM";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int t = 1; t < 10; t = t + 1) {
        for (int h = 0; h < 10; h = h + 1) {
            for (int e = 0; e < 10; e = e + 1) {
                for (int b = 1; b < 10; b = b + 1) {
                    for (int s = 1; s < 10; s = s + 1) {
                        for (int o = 1; o < 10; o = o + 1) {
                            for (int f = 0; f < 10; f = f + 1) {
                                for (int m = 1; m < 10; m = m + 1) {
                                    intA = (e + h * 10 + t * 100) +
                                        (t + s * 10 + e * 100 + b * 1000) +
                                        (f + o * 10) +
                                        (e + m * 10) ;
                                    intB = s + t * 10 + o * 100 + h * 1000 + s * 10000;
                                    if (intA == intB) {
                                        if ( t != h && t != e && t != b && t != s && t != o && t != f && t != m && h != e && h != b && h != s && h != o && h != f && h != m && e != b && e != s && e != o && e != f && e != m && b != s && b != o && b != f && b != m && s != o && s != f && s != m && o != f && o != m && f != m) {
                                                strItemsResult = to_string(t) + to_string(h) + to_string(e) + to_string(b) + to_string(s) + to_string(o) + to_string(f) + to_string(m);
                                                cout << strItemsResult + " \n";
                                                intCount = intCount + 1;
                                        };
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    };

label115 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
