#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // SIGN OF THE TIMES GNOSIS
    strItems = "SIGNOFTHEM";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int s = 1; s < 10; s = s + 1) {
        for (int i = 0; i < 10; i = i + 1) {
            for (int g = 1; g < 10; g = g + 1) {
                for (int n = 0; n < 10; n = n + 1) {
                    for (int o = 1; o < 10; o = o + 1) {
                        for (int f = 0; f < 10; f = f + 1) {
                            for (int t = 1; t < 10; t = t + 1) {
                                for (int h = 0; h < 10; h = h + 1) {
                                    for (int e = 0; e < 10; e = e + 1) {
                                        for (int m = 0; m < 10; m = m + 1) {
                                            intA = (n + g * 10 + i * 100 + s * 1000) +
                                                (f + o * 10) +
                                                (e + h * 10 + t * 100) +
                                                (s + e * 10 + m * 100 + i * 1000 + t * 10000) ;
                                            intB = s + i * 10 + s * 100 + o * 1000 + n * 10000 + g * 100000;
                                            if (intA == intB) {
                                                if ( s != i && s != g && s != n && s != o && s != f && s != t && s != h && s != e && s != m && i != g && i != n && i != o && i != f && i != t && i != h && i != e && i != m && g != n && g != o && g != f && g != t && g != h && g != e && g != m && n != o && n != f && n != t && n != h && n != e && n != m && o != f && o != t && o != h && o != e && o != m && f != t && f != h && f != e && f != m && t != h && t != e && t != m && h != e && h != m && e != m) {
                                                        strItemsResult = to_string(s) + to_string(i) + to_string(g) + to_string(n) + to_string(o) + to_string(f) + to_string(t) + to_string(h) + to_string(e) + to_string(m);
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

label95 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
