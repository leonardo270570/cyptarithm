#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // BIG BIG WORLD BELOW
    strItems = "BIGWORLDE";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int b = 1; b < 10; b = b + 1) {
        for (int i = 0; i < 10; i = i + 1) {
            for (int g = 0; g < 10; g = g + 1) {
                for (int w = 1; w < 10; w = w + 1) {
                    for (int o = 0; o < 10; o = o + 1) {
                        for (int r = 0; r < 10; r = r + 1) {
                            for (int l = 0; l < 10; l = l + 1) {
                                for (int d = 0; d < 10; d = d + 1) {
                                    for (int e = 0; e < 10; e = e + 1) {
                                        intA = (g + i * 10 + b * 100) +
                                            (g + i * 10 + b * 100) +
                                            (d + l * 10 + r * 100 + o * 1000 + w * 10000) ;
                                        intB = w + o * 10 + l * 100 + e * 1000 + b * 10000;
                                        if (intA == intB) {
                                            if ( b != i && b != g && b != w && b != o && b != r && b != l && b != d && b != e && i != g && i != w && i != o && i != r && i != l && i != d && i != e && g != w && g != o && g != r && g != l && g != d && g != e && w != o && w != r && w != l && w != d && w != e && o != r && o != l && o != d && o != e && r != l && r != d && r != e && l != d && l != e && d != e) {
                                                    strItemsResult = to_string(b) + to_string(i) + to_string(g) + to_string(w) + to_string(o) + to_string(r) + to_string(l) + to_string(d) + to_string(e);
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

label91 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
