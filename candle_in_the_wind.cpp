#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // CANDLE IN THE WIND NETTLE
    strItems = "CANDLEITHW";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int c = 1; c < 10; c = c + 1) {
        for (int a = 0; a < 10; a = a + 1) {
            for (int n = 1; n < 10; n = n + 1) {
                for (int d = 0; d < 10; d = d + 1) {
                    for (int l = 0; l < 10; l = l + 1) {
                        for (int e = 0; e < 10; e = e + 1) {
                            for (int i = 1; i < 10; i = i + 1) {
                                for (int t = 1; t < 10; t = t + 1) {
                                    for (int h = 0; h < 10; h = h + 1) {
                                        for (int w = 1; w < 10; w = w + 1) {
                                            intA = (e + l * 10 + d * 100 + n * 1000 + a * 10000 + c * 100000) +
                                                (n + i * 10) +
                                                (e + h * 10 + t * 100) +
                                                (d + n * 10 + i * 100 + w * 1000) ;
                                            intB = e + l * 10 + t * 100 + t * 1000 + e * 10000 + n * 100000;
                                            if (intA == intB) {
                                                if ( c != a && c != n && c != d && c != l && c != e && c != i && c != t && c != h && c != w && a != n && a != d && a != l && a != e && a != i && a != t && a != h && a != w && n != d && n != l && n != e && n != i && n != t && n != h && n != w && d != l && d != e && d != i && d != t && d != h && d != w && l != e && l != i && l != t && l != h && l != w && e != i && e != t && e != h && e != w && i != t && i != h && i != w && t != h && t != w && h != w) {
                                                        strItemsResult = to_string(c) + to_string(a) + to_string(n) + to_string(d) + to_string(l) + to_string(e) + to_string(i) + to_string(t) + to_string(h) + to_string(w);
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
