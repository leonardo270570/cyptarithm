#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // RAIN AND TEARS ADORED
    strItems = "RAINDTESO";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int r = 1; r < 10; r = r + 1) {
        for (int a = 1; a < 10; a = a + 1) {
            for (int i = 0; i < 10; i = i + 1) {
                for (int n = 0; n < 10; n = n + 1) {
                    for (int d = 0; d < 10; d = d + 1) {
                        for (int t = 1; t < 10; t = t + 1) {
                            for (int e = 0; e < 10; e = e + 1) {
                                for (int s = 0; s < 10; s = s + 1) {
                                    for (int o = 0; o < 10; o = o + 1) {
                                        intA = (n + i * 10 + a * 100 + r * 1000) +
                                            (d + n * 10 + a * 100) +
                                            (s + r * 10 + a * 100 + e * 1000 + t * 10000) ;
                                        intB = d + e * 10 + r * 100 + o * 1000 + d * 10000 + a * 100000;
                                        if (intA == intB) {
                                            if ( r != a && r != i && r != n && r != d && r != t && r != e && r != s && r != o && a != i && a != n && a != d && a != t && a != e && a != s && a != o && i != n && i != d && i != t && i != e && i != s && i != o && n != d && n != t && n != e && n != s && n != o && d != t && d != e && d != s && d != o && t != e && t != s && t != o && e != s && e != o && s != o) {
                                                    strItemsResult = to_string(r) + to_string(a) + to_string(i) + to_string(n) + to_string(d) + to_string(t) + to_string(e) + to_string(s) + to_string(o);
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

label110 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
