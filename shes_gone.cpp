#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // SHES GONE SWOON
    strItems = "SHEGONW";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int s = 1; s < 10; s = s + 1) {
        for (int h = 0; h < 10; h = h + 1) {
            for (int e = 0; e < 10; e = e + 1) {
                for (int g = 1; g < 10; g = g + 1) {
                    for (int o = 0; o < 10; o = o + 1) {
                        for (int n = 0; n < 10; n = n + 1) {
                            for (int w = 0; w < 10; w = w + 1) {
                                intA = (s + e * 10 + h * 100 + s * 1000) +
                                    (e + n * 10 + o * 100 + g * 1000) ;
                                intB = n + o * 10 + o * 100 + w * 1000 + s * 10000;
                                if (intA == intB) {
                                    if ( s != h && s != e && s != g && s != o && s != n && s != w && h != e && h != g && h != o && h != n && h != w && e != g && e != o && e != n && e != w && g != o && g != n && g != w && o != n && o != w && n != w) {
                                            strItemsResult = to_string(s) + to_string(h) + to_string(e) + to_string(g) + to_string(o) + to_string(n) + to_string(w);
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

label74 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
