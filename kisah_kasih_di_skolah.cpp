#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // KISAH KASIH DI SKOLAH
    strItems = "KISAHDOL";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int k = 1; k < 10; k = k + 1) {
        for (int i = 0; i < 10; i = i + 1) {
            for (int s = 1; s < 10; s = s + 1) {
                for (int a = 0; a < 10; a = a + 1) {
                    for (int h = 0; h < 10; h = h + 1) {
                        for (int d = 1; d < 10; d = d + 1) {
                            for (int o = 0; o < 10; o = o + 1) {
                                for (int l = 0; l < 10; l = l + 1) {
                                    intA = (h + a * 10 + s * 100 + i * 1000 + k * 10000) +
                                        (h + i * 10 + s * 100 + a * 1000 + k * 10000) +
                                        (i + d * 10) ;
                                    intB = h + a * 10 + l * 100 + o * 1000 + k * 10000 + s * 100000;
                                    if (intA == intB) {
                                        if ( k != i && k != s && k != a && k != h && k != d && k != o && k != l && i != s && i != a && i != h && i != d && i != o && i != l && s != a && s != h && s != d && s != o && s != l && a != h && a != d && a != o && a != l && h != d && h != o && h != l && d != o && d != l && o != l) {
                                                strItemsResult = to_string(k) + to_string(i) + to_string(s) + to_string(a) + to_string(h) + to_string(d) + to_string(o) + to_string(l);
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
