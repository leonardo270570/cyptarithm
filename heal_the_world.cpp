#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // HEAL THE WORLD ANDREW
    strItems = "HEALTWORDN";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int h = 1; h < 10; h = h + 1) {
        for (int e = 0; e < 10; e = e + 1) {
            for (int a = 1; a < 10; a = a + 1) {
                for (int l = 0; l < 10; l = l + 1) {
                    for (int t = 1; t < 10; t = t + 1) {
                        for (int w = 1; w < 10; w = w + 1) {
                            for (int o = 0; o < 10; o = o + 1) {
                                for (int r = 0; r < 10; r = r + 1) {
                                    for (int d = 0; d < 10; d = d + 1) {
                                        for (int n = 0; n < 10; n = n + 1) {
                                            intA = (l + a * 10 + e * 100 + h * 1000) +
                                                (e + h * 10 + t * 100) +
                                                (d + l * 10 + r * 100 + o * 1000 + w * 10000) ;
                                            intB = w + e * 10 + r * 100 + d * 1000 + n * 10000 + a * 100000;
                                            if (intA == intB) {
                                                if ( h != e && h != a && h != l && h != t && h != w && h != o && h != r && h != d && h != n && e != a && e != l && e != t && e != w && e != o && e != r && e != d && e != n && a != l && a != t && a != w && a != o && a != r && a != d && a != n && l != t && l != w && l != o && l != r && l != d && l != n && t != w && t != o && t != r && t != d && t != n && w != o && w != r && w != d && w != n && o != r && o != d && o != n && r != d && r != n && d != n) {
                                                        strItemsResult = to_string(h) + to_string(e) + to_string(a) + to_string(l) + to_string(t) + to_string(w) + to_string(o) + to_string(r) + to_string(d) + to_string(n);
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

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
