#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // SEND ME AN ANGEL GOOGLE
    strItems = "SENDMAGLO";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int s = 1; s < 10; s = s + 1) {
        for (int e = 0; e < 10; e = e + 1) {
            for (int n = 0; n < 10; n = n + 1) {
                for (int d = 0; d < 10; d = d + 1) {
                    for (int m = 1; m < 10; m = m + 1) {
                        for (int a = 1; a < 10; a = a + 1) {
                            for (int g = 1; g < 10; g = g + 1) {
                                for (int l = 0; l < 10; l = l + 1) {
                                    for (int o = 0; o < 10; o = o + 1) {
                                        intA = (d + n * 10 + e * 100 + s * 1000) +
                                            (e + m * 10) +
                                            (n + a * 10) +
                                            (l + e * 10 + g * 100 + n * 1000 + a * 10000) ;
                                        intB = e + l * 10 + g * 100 + o * 1000 + o * 10000 + g * 100000;
                                        if (intA == intB) {
                                            if ( s != e && s != n && s != d && s != m && s != a && s != g && s != l && s != o && e != n && e != d && e != m && e != a && e != g && e != l && e != o && n != d && n != m && n != a && n != g && n != l && n != o && d != m && d != a && d != g && d != l && d != o && m != a && m != g && m != l && m != o && a != g && a != l && a != o && g != l && g != o && l != o) {
                                                    strItemsResult = to_string(s) + to_string(e) + to_string(n) + to_string(d) + to_string(m) + to_string(a) + to_string(g) + to_string(l) + to_string(o);
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
