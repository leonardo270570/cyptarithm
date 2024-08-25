#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // ANGEL BABY BELLS
    strItems = "ANGELBYS";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int a = 1; a < 10; a = a + 1) {
        for (int n = 0; n < 10; n = n + 1) {
            for (int g = 0; g < 10; g = g + 1) {
                for (int e = 0; e < 10; e = e + 1) {
                    for (int l = 0; l < 10; l = l + 1) {
                        for (int b = 1; b < 10; b = b + 1) {
                            for (int y = 0; y < 10; y = y + 1) {
                                for (int s = 0; s < 10; s = s + 1) {
                                    intA = (l + e * 10 + g * 100 + n * 1000 + a * 10000) +
                                        (y + b * 10 + a * 100 + b * 1000) ;
                                    intB = s + l * 10 + l * 100 + e * 1000 + b * 10000;
                                    if (intA == intB) {
                                        if ( a != n && a != g && a != e && a != l && a != b && a != y && a != s && n != g && n != e && n != l && n != b && n != y && n != s && g != e && g != l && g != b && g != y && g != s && e != l && e != b && e != y && e != s && l != b && l != y && l != s && b != y && b != s && y != s) {
                                                strItemsResult = to_string(a) + to_string(n) + to_string(g) + to_string(e) + to_string(l) + to_string(b) + to_string(y) + to_string(s);
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

label114 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
