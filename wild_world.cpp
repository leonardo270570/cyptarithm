#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // WILD WORLD DROWN
    strItems = "WILDORN";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int w = 1; w < 10; w = w + 1) {
        for (int i = 0; i < 10; i = i + 1) {
            for (int l = 0; l < 10; l = l + 1) {
                for (int d = 1; d < 10; d = d + 1) {
                    for (int o = 0; o < 10; o = o + 1) {
                        for (int r = 0; r < 10; r = r + 1) {
                            for (int n = 0; n < 10; n = n + 1) {
                                intA = (d + l * 10 + i * 100 + w * 1000) +
                                    (d + l * 10 + r * 100 + o * 1000 + w * 10000) ;
                                intB = n + w * 10 + o * 100 + r * 1000 + d * 10000;
                                if (intA == intB) {
                                    if ( w != i && w != l && w != d && w != o && w != r && w != n && i != l && i != d && i != o && i != r && i != n && l != d && l != o && l != r && l != n && d != o && d != r && d != n && o != r && o != n && r != n) {
                                            strItemsResult = to_string(w) + to_string(i) + to_string(l) + to_string(d) + to_string(o) + to_string(r) + to_string(n);
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

label111 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
