#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // PLEASE PLEASE PLEASE ALADIN
    strItems = "PLEASDIN";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int p = 1; p < 10; p = p + 1) {
        for (int l = 0; l < 10; l = l + 1) {
            for (int e = 0; e < 10; e = e + 1) {
                for (int a = 1; a < 10; a = a + 1) {
                    for (int s = 0; s < 10; s = s + 1) {
                        for (int d = 0; d < 10; d = d + 1) {
                            for (int i = 0; i < 10; i = i + 1) {
                                for (int n = 0; n < 10; n = n + 1) {
                                    intA = (e + s * 10 + a * 100 + e * 1000 + l * 10000 + p * 100000) +
                                        (e + s * 10 + a * 100 + e * 1000 + l * 10000 + p * 100000) +
                                        (e + s * 10 + a * 100 + e * 1000 + l * 10000 + p * 100000) ;
                                    intB = n + i * 10 + d * 100 + a * 1000 + l * 10000 + a * 100000;
                                    if (intA == intB) {
                                        if ( p != l && p != e && p != a && p != s && p != d && p != i && p != n && l != e && l != a && l != s && l != d && l != i && l != n && e != a && e != s && e != d && e != i && e != n && a != s && a != d && a != i && a != n && s != d && s != i && s != n && d != i && d != n && i != n) {
                                                strItemsResult = to_string(p) + to_string(l) + to_string(e) + to_string(a) + to_string(s) + to_string(d) + to_string(i) + to_string(n);
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
