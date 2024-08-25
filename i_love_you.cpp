#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // I LOVE YOU EXILE
    strItems = "ILOVEYUX";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int i = 1; i < 10; i = i + 1) {
        for (int l = 1; l < 10; l = l + 1) {
            for (int o = 0; o < 10; o = o + 1) {
                for (int v = 0; v < 10; v = v + 1) {
                    for (int e = 1; e < 10; e = e + 1) {
                        for (int y = 1; y < 10; y = y + 1) {
                            for (int u = 0; u < 10; u = u + 1) {
                                for (int x = 0; x < 10; x = x + 1) {
                                    intA = (i) +
                                        (e + v * 10 + o * 100 + l * 1000) +
                                        (u + o * 10 + y * 100) ;
                                    intB = e + l * 10 + i * 100 + x * 1000 + e * 10000;
                                    if (intA == intB) {
                                        if ( i != l && i != o && i != v && i != e && i != y && i != u && i != x && l != o && l != v && l != e && l != y && l != u && l != x && o != v && o != e && o != y && o != u && o != x && v != e && v != y && v != u && v != x && e != y && e != u && e != x && y != u && y != x && u != x) {
                                                strItemsResult = to_string(i) + to_string(l) + to_string(o) + to_string(v) + to_string(e) + to_string(y) + to_string(u) + to_string(x);
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

label122 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
