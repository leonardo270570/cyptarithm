#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // SWEAR IT AGAIN VIRGIN
    strItems = "SWEARITGNV";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int s = 1; s < 10; s = s + 1) {
        for (int w = 0; w < 10; w = w + 1) {
            for (int e = 0; e < 10; e = e + 1) {
                for (int a = 1; a < 10; a = a + 1) {
                    for (int r = 0; r < 10; r = r + 1) {
                        for (int i = 1; i < 10; i = i + 1) {
                            for (int t = 0; t < 10; t = t + 1) {
                                for (int g = 0; g < 10; g = g + 1) {
                                    for (int n = 0; n < 10; n = n + 1) {
                                        for (int v = 1; v < 10; v = v + 1) {
                                            intA = (r + a * 10 + e * 100 + w * 1000 + s * 10000) +
                                                (t + i * 10) +
                                                (n + i * 10 + a * 100 + g * 1000 + a * 10000) ;
                                            intB = n + i * 10 + g * 100 + r * 1000 + i * 10000 + v * 100000;
                                            if (intA == intB) {
                                                if ( s != w && s != e && s != a && s != r && s != i && s != t && s != g && s != n && s != v && w != e && w != a && w != r && w != i && w != t && w != g && w != n && w != v && e != a && e != r && e != i && e != t && e != g && e != n && e != v && a != r && a != i && a != t && a != g && a != n && a != v && r != i && r != t && r != g && r != n && r != v && i != t && i != g && i != n && i != v && t != g && t != n && t != v && g != n && g != v && n != v) {
                                                        strItemsResult = to_string(s) + to_string(w) + to_string(e) + to_string(a) + to_string(r) + to_string(i) + to_string(t) + to_string(g) + to_string(n) + to_string(v);
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
