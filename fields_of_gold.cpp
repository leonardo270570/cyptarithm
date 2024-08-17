#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // FIELDS OF GOLD PUDDLE
    strItems = "FIELDSOGPU";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int f = 1; f < 10; f = f + 1) {
        for (int i = 0; i < 10; i = i + 1) {
            for (int e = 0; e < 10; e = e + 1) {
                for (int l = 0; l < 10; l = l + 1) {
                    for (int d = 0; d < 10; d = d + 1) {
                        for (int s = 0; s < 10; s = s + 1) {
                            for (int o = 1; o < 10; o = o + 1) {
                                for (int g = 1; g < 10; g = g + 1) {
                                    for (int p = 1; p < 10; p = p + 1) {
                                        for (int u = 0; u < 10; u = u + 1) {
                                            intA = (s + d * 10 + l * 100 + e * 1000 + i * 10000 + f * 100000) +
                                                (f + o * 10) +
                                                (d + l * 10 + o * 100 + g * 1000) ;
                                            intB = e + l * 10 + d * 100 + d * 1000 + u * 10000 + p * 100000;
                                            if (intA == intB) {
                                                if ( f != i && f != e && f != l && f != d && f != s && f != o && f != g && f != p && f != u && i != e && i != l && i != d && i != s && i != o && i != g && i != p && i != u && e != l && e != d && e != s && e != o && e != g && e != p && e != u && l != d && l != s && l != o && l != g && l != p && l != u && d != s && d != o && d != g && d != p && d != u && s != o && s != g && s != p && s != u && o != g && o != p && o != u && g != p && g != u && p != u) {
                                                        strItemsResult = to_string(f) + to_string(i) + to_string(e) + to_string(l) + to_string(d) + to_string(s) + to_string(o) + to_string(g) + to_string(p) + to_string(u);
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
