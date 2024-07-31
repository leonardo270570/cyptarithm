#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // TUA TUA KELADI KOKIKU
    strItems = "TUAKELDIO";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int t = 1; t < 10; t = t + 1) {
        for (int u = 0; u < 10; u = u + 1) {
            for (int a = 0; a < 10; a = a + 1) {
                for (int k = 1; k < 10; k = k + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int l = 0; l < 10; l = l + 1) {
                            for (int d = 0; d < 10; d = d + 1) {
                                for (int i = 0; i < 10; i = i + 1) {
                                    for (int o = 0; o < 10; o = o + 1) {
                                        intA = (a + u * 10 + t * 100) +
                                            (a + u * 10 + t * 100) +
                                            (i + d * 10 + a * 100 + l * 1000 + e * 10000 + k * 100000) ;
                                        intB = u + k * 10 + i * 100 + k * 1000 + o * 10000 + k * 100000;
                                        if (intA == intB) {
                                            if ( t != u && t != a && t != k && t != e && t != l && t != d && t != i && t != o && u != a && u != k && u != e && u != l && u != d && u != i && u != o && a != k && a != e && a != l && a != d && a != i && a != o && k != e && k != l && k != d && k != i && k != o && e != l && e != d && e != i && e != o && l != d && l != i && l != o && d != i && d != o && i != o) {
                                                    strItemsResult = to_string(t) + to_string(u) + to_string(a) + to_string(k) + to_string(e) + to_string(l) + to_string(d) + to_string(i) + to_string(o);
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

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
