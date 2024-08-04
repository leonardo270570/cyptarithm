#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // THE ONLY ONE EVLYN
    strItems = "THEONLYV";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int t = 1; t < 10; t = t + 1) {
        for (int h = 0; h < 10; h = h + 1) {
            for (int e = 1; e < 10; e = e + 1) {
                for (int o = 1; o < 10; o = o + 1) {
                    for (int n = 0; n < 10; n = n + 1) {
                        for (int l = 0; l < 10; l = l + 1) {
                            for (int y = 0; y < 10; y = y + 1) {
                                for (int v = 0; v < 10; v = v + 1) {
                                    intA = (e + h * 10 + t * 100) +
                                        (y + l * 10 + n * 100 + o * 1000) +
                                        (e + n * 10 + o * 100) ;
                                    intB = n + y * 10 + l * 100 + v * 1000 + e * 10000;
                                    if (intA == intB) {
                                        if ( t != h && t != e && t != o && t != n && t != l && t != y && t != v && h != e && h != o && h != n && h != l && h != y && h != v && e != o && e != n && e != l && e != y && e != v && o != n && o != l && o != y && o != v && n != l && n != y && n != v && l != y && l != v && y != v) {
                                                strItemsResult = to_string(t) + to_string(h) + to_string(e) + to_string(o) + to_string(n) + to_string(l) + to_string(y) + to_string(v);
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

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
