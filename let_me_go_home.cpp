#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // LET ME GO HOME GOOSE
    strItems = "LETMGOHS";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int l = 1; l < 10; l = l + 1) {
        for (int e = 0; e < 10; e = e + 1) {
            for (int t = 0; t < 10; t = t + 1) {
                for (int m = 1; m < 10; m = m + 1) {
                    for (int g = 1; g < 10; g = g + 1) {
                        for (int o = 0; o < 10; o = o + 1) {
                            for (int h = 1; h < 10; h = h + 1) {
                                for (int s = 0; s < 10; s = s + 1) {
                                    intA = (t + e * 10 + l * 100) +
                                        (e + m * 10) +
                                        (o + g * 10) +
                                        (e + m * 10 + o * 100 + h * 1000) ;
                                    intB = e + s * 10 + o * 100 + o * 1000 + g * 10000;
                                    if (intA == intB) {
                                        if ( l != e && l != t && l != m && l != g && l != o && l != h && l != s && e != t && e != m && e != g && e != o && e != h && e != s && t != m && t != g && t != o && t != h && t != s && m != g && m != o && m != h && m != s && g != o && g != h && g != s && o != h && o != s && h != s) {
                                                strItemsResult = to_string(l) + to_string(e) + to_string(t) + to_string(m) + to_string(g) + to_string(o) + to_string(h) + to_string(s);
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
