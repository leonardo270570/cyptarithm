#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // GOD ONLY KNOWS WILDLY
    strItems = "GODNLYKWSI";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int g = 1; g < 10; g = g + 1) {
        for (int o = 1; o < 10; o = o + 1) {
            for (int d = 0; d < 10; d = d + 1) {
                for (int n = 0; n < 10; n = n + 1) {
                    for (int l = 0; l < 10; l = l + 1) {
                        for (int y = 0; y < 10; y = y + 1) {
                            for (int k = 1; k < 10; k = k + 1) {
                                for (int w = 1; w < 10; w = w + 1) {
                                    for (int s = 0; s < 10; s = s + 1) {
                                        for (int i = 0; i < 10; i = i + 1) {
                                            intA = (d + o * 10 + g * 100) +
                                                (y + l * 10 + n * 100 + o * 1000) +
                                                (s + w * 10 + o * 100 + n * 1000 + k * 10000) ;
                                            intB = y + l * 10 + d * 100 + l * 1000 + i * 10000 + w * 100000;
                                            if (intA == intB) {
                                                if ( g != o && g != d && g != n && g != l && g != y && g != k && g != w && g != s && g != i && o != d && o != n && o != l && o != y && o != k && o != w && o != s && o != i && d != n && d != l && d != y && d != k && d != w && d != s && d != i && n != l && n != y && n != k && n != w && n != s && n != i && l != y && l != k && l != w && l != s && l != i && y != k && y != w && y != s && y != i && k != w && k != s && k != i && w != s && w != i && s != i) {
                                                        strItemsResult = to_string(g) + to_string(o) + to_string(d) + to_string(n) + to_string(l) + to_string(y) + to_string(k) + to_string(w) + to_string(s) + to_string(i);
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

label116 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
