#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // WOMAN IN LOVE MAIDEN
    strItems = "WOMANILVED";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int w = 1; w < 10; w = w + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int m = 1; m < 10; m = m + 1) {
                for (int a = 0; a < 10; a = a + 1) {
                    for (int n = 0; n < 10; n = n + 1) {
                        for (int i = 1; i < 10; i = i + 1) {
                            for (int l = 1; l < 10; l = l + 1) {
                                for (int v = 0; v < 10; v = v + 1) {
                                    for (int e = 0; e < 10; e = e + 1) {
                                        for (int d = 0; d < 10; d = d + 1) {
                                            intA = (n + a * 10 + m * 100 + o * 1000 + w * 10000) +
                                                (n + i * 10) +
                                                (e + v * 10 + o * 100 + l * 1000) ;
                                            intB = n + e * 10 + d * 100 + i * 1000 + a * 10000 + m * 100000;
                                            if (intA == intB) {
                                                if ( w != o && w != m && w != a && w != n && w != i && w != l && w != v && w != e && w != d && o != m && o != a && o != n && o != i && o != l && o != v && o != e && o != d && m != a && m != n && m != i && m != l && m != v && m != e && m != d && a != n && a != i && a != l && a != v && a != e && a != d && n != i && n != l && n != v && n != e && n != d && i != l && i != v && i != e && i != d && l != v && l != e && l != d && v != e && v != d && e != d) {
                                                        strItemsResult = to_string(w) + to_string(o) + to_string(m) + to_string(a) + to_string(n) + to_string(i) + to_string(l) + to_string(v) + to_string(e) + to_string(d);
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

label103 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
