#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // IF LOVE IS BLIND ENDOSS
    strItems = "IFLOVESBND";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int i = 1; i < 10; i = i + 1) {
        for (int f = 0; f < 10; f = f + 1) {
            for (int l = 1; l < 10; l = l + 1) {
                for (int o = 0; o < 10; o = o + 1) {
                    for (int v = 0; v < 10; v = v + 1) {
                        for (int e = 1; e < 10; e = e + 1) {
                            for (int s = 0; s < 10; s = s + 1) {
                                for (int b = 1; b < 10; b = b + 1) {
                                    for (int n = 0; n < 10; n = n + 1) {
                                        for (int d = 0; d < 10; d = d + 1) {
                                            intA = (f + i * 10) +
                                                (e + v * 10 + o * 100 + l * 1000) +
                                                (s + i * 10) +
                                                (d + n * 10 + i * 100 + l * 1000 + b * 10000) ;
                                            intB = s + s * 10 + o * 100 + d * 1000 + n * 10000 + e * 100000;
                                            if (intA == intB) {
                                                if ( i != f && i != l && i != o && i != v && i != e && i != s && i != b && i != n && i != d && f != l && f != o && f != v && f != e && f != s && f != b && f != n && f != d && l != o && l != v && l != e && l != s && l != b && l != n && l != d && o != v && o != e && o != s && o != b && o != n && o != d && v != e && v != s && v != b && v != n && v != d && e != s && e != b && e != n && e != d && s != b && s != n && s != d && b != n && b != d && n != d) {
                                                        strItemsResult = to_string(i) + to_string(f) + to_string(l) + to_string(o) + to_string(v) + to_string(e) + to_string(s) + to_string(b) + to_string(n) + to_string(d);
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
        };
    };

label97 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
