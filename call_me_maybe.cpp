#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // CALL ME MAYBE CELLO
    strItems = "CALMEYBO";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int c = 1; c < 10; c = c + 1) {
        for (int a = 0; a < 10; a = a + 1) {
            for (int l = 0; l < 10; l = l + 1) {
                for (int m = 1; m < 10; m = m + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int y = 0; y < 10; y = y + 1) {
                            for (int b = 0; b < 10; b = b + 1) {
                                for (int o = 0; o < 10; o = o + 1) {
                                    intA = (l + l * 10 + a * 100 + c * 1000) +
                                        (e + m * 10) +
                                        (e + b * 10 + y * 100 + a * 1000 + m * 10000) ;
                                    intB = o + l * 10 + l * 100 + e * 1000 + c * 10000;
                                    if (intA == intB) {
                                        if ( c != a && c != l && c != m && c != e && c != y && c != b && c != o && a != l && a != m && a != e && a != y && a != b && a != o && l != m && l != e && l != y && l != b && l != o && m != e && m != y && m != b && m != o && e != y && e != b && e != o && y != b && y != o && b != o) {
                                                strItemsResult = to_string(c) + to_string(a) + to_string(l) + to_string(m) + to_string(e) + to_string(y) + to_string(b) + to_string(o);
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

label117 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
