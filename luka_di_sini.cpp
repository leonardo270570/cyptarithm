#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // LUKA DI SINI SENDY
    strItems = "LUKADISNEY";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int l = 1; l < 10; l = l + 1) {
        for (int u = 0; u < 10; u = u + 1) {
            for (int k = 0; k < 10; k = k + 1) {
                for (int a = 0; a < 10; a = a + 1) {
                    for (int d = 1; d < 10; d = d + 1) {
                        for (int i = 0; i < 10; i = i + 1) {
                            for (int s = 1; s < 10; s = s + 1) {
                                for (int n = 0; n < 10; n = n + 1) {
                                    for (int e = 0; e < 10; e = e + 1) {
                                        for (int y = 0; y < 10; y = y + 1) {
                                            intA = (a + k * 10 + u * 100 + l * 1000) +
                                                (i + d * 10) +
                                                (i + n * 10 + i * 100 + s * 1000) ;
                                            intB = y + d * 10 + n * 100 + e * 1000 + s * 10000;
                                            if (intA == intB) {
                                                if ( l != u && l != k && l != a && l != d && l != i && l != s && l != n && l != e && l != y && u != k && u != a && u != d && u != i && u != s && u != n && u != e && u != y && k != a && k != d && k != i && k != s && k != n && k != e && k != y && a != d && a != i && a != s && a != n && a != e && a != y && d != i && d != s && d != n && d != e && d != y && i != s && i != n && i != e && i != y && s != n && s != e && s != y && n != e && n != y && e != y) {
                                                        strItemsResult = to_string(l) + to_string(u) + to_string(k) + to_string(a) + to_string(d) + to_string(i) + to_string(s) + to_string(n) + to_string(e) + to_string(y);
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
