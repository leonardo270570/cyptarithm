#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // KANGEN KANGEN NAMAKU
    strItems = "KANGEMU";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int k = 1; k < 10; k = k + 1) {
        for (int a = 0; a < 10; a = a + 1) {
            for (int n = 1; n < 10; n = n + 1) {
                for (int g = 0; g < 10; g = g + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int m = 0; m < 10; m = m + 1) {
                            for (int u = 0; u < 10; u = u + 1) {
                                intA = (n + e * 10 + g * 100 + n * 1000 + a * 10000 + k * 100000) +
                                    (n + e * 10 + g * 100 + n * 1000 + a * 10000 + k * 100000) ;
                                intB = u + k * 10 + a * 100 + m * 1000 + a * 10000 + n * 100000;
                                if (intA == intB) {
                                    if ( k != a && k != n && k != g && k != e && k != m && k != u && a != n && a != g && a != e && a != m && a != u && n != g && n != e && n != m && n != u && g != e && g != m && g != u && e != m && e != u && m != u) {
                                            strItemsResult = to_string(k) + to_string(a) + to_string(n) + to_string(g) + to_string(e) + to_string(m) + to_string(u);
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

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
