#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // I AM NOT ALONE MEDIO
    strItems = "IAMNOTLED";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int i = 1; i < 10; i = i + 1) {
        for (int a = 1; a < 10; a = a + 1) {
            for (int m = 1; m < 10; m = m + 1) {
                for (int n = 1; n < 10; n = n + 1) {
                    for (int o = 0; o < 10; o = o + 1) {
                        for (int t = 0; t < 10; t = t + 1) {
                            for (int l = 0; l < 10; l = l + 1) {
                                for (int e = 0; e < 10; e = e + 1) {
                                    for (int d = 0; d < 10; d = d + 1) {
                                        intA = (i) +
                                            (m + a * 10) +
                                            (t + o * 10 + n * 100) +
                                            (e + n * 10 + o * 100 + l * 1000 + a * 10000) ;
                                        intB = o + i * 10 + d * 100 + e * 1000 + m * 10000;
                                        if (intA == intB) {
                                            if ( i != a && i != m && i != n && i != o && i != t && i != l && i != e && i != d && a != m && a != n && a != o && a != t && a != l && a != e && a != d && m != n && m != o && m != t && m != l && m != e && m != d && n != o && n != t && n != l && n != e && n != d && o != t && o != l && o != e && o != d && t != l && t != e && t != d && l != e && l != d && e != d) {
                                                    strItemsResult = to_string(i) + to_string(a) + to_string(m) + to_string(n) + to_string(o) + to_string(t) + to_string(l) + to_string(e) + to_string(d);
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

label119 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
