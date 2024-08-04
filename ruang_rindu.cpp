#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // RUANG RINDU DAWUAN
    strItems = "RUANGIDW";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int r = 1; r < 10; r = r + 1) {
        for (int u = 0; u < 10; u = u + 1) {
            for (int a = 0; a < 10; a = a + 1) {
                for (int n = 0; n < 10; n = n + 1) {
                    for (int g = 0; g < 10; g = g + 1) {
                        for (int i = 0; i < 10; i = i + 1) {
                            for (int d = 1; d < 10; d = d + 1) {
                                for (int w = 0; w < 10; w = w + 1) {
                                    intA = (g + n * 10 + a * 100 + u * 1000 + r * 10000) +
                                        (u + d * 10 + n * 100 + i * 1000 + r * 10000) ;
                                    intB = n + a * 10 + u * 100 + w * 1000 + a * 10000 + d * 100000;
                                    if (intA == intB) {
                                        if ( r != u && r != a && r != n && r != g && r != i && r != d && r != w && u != a && u != n && u != g && u != i && u != d && u != w && a != n && a != g && a != i && a != d && a != w && n != g && n != i && n != d && n != w && g != i && g != d && g != w && i != d && i != w && d != w) {
                                                strItemsResult = to_string(r) + to_string(u) + to_string(a) + to_string(n) + to_string(g) + to_string(i) + to_string(d) + to_string(w);
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
