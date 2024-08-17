#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // YOU ROCK MY WORLD CLOUDY
    strItems = "YOURCKMWLD";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int y = 1; y < 10; y = y + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int u = 0; u < 10; u = u + 1) {
                for (int r = 1; r < 10; r = r + 1) {
                    for (int c = 1; c < 10; c = c + 1) {
                        for (int k = 0; k < 10; k = k + 1) {
                            for (int m = 1; m < 10; m = m + 1) {
                                for (int w = 1; w < 10; w = w + 1) {
                                    for (int l = 0; l < 10; l = l + 1) {
                                        for (int d = 0; d < 10; d = d + 1) {
                                            intA = (u + o * 10 + y * 100) +
                                                (k + c * 10 + o * 100 + r * 1000) +
                                                (y + m * 10) +
                                                (d + l * 10 + r * 100 + o * 1000 + w * 10000) ;
                                            intB = y + d * 10 + u * 100 + o * 1000 + l * 10000 + c * 100000;
                                            if (intA == intB) {
                                                if ( y != o && y != u && y != r && y != c && y != k && y != m && y != w && y != l && y != d && o != u && o != r && o != c && o != k && o != m && o != w && o != l && o != d && u != r && u != c && u != k && u != m && u != w && u != l && u != d && r != c && r != k && r != m && r != w && r != l && r != d && c != k && c != m && c != w && c != l && c != d && k != m && k != w && k != l && k != d && m != w && m != l && m != d && w != l && w != d && l != d) {
                                                        strItemsResult = to_string(y) + to_string(o) + to_string(u) + to_string(r) + to_string(c) + to_string(k) + to_string(m) + to_string(w) + to_string(l) + to_string(d);
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
