#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // CLOSE TO YOU USUAL
    strItems = "CLOSETYUA";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int c = 1; c < 10; c = c + 1) {
        for (int l = 0; l < 10; l = l + 1) {
            for (int o = 0; o < 10; o = o + 1) {
                for (int s = 0; s < 10; s = s + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int t = 1; t < 10; t = t + 1) {
                            for (int y = 1; y < 10; y = y + 1) {
                                for (int u = 1; u < 10; u = u + 1) {
                                    for (int a = 0; a < 10; a = a + 1) {
                                        intA = (e + s * 10 + o * 100 + l * 1000 + c * 10000) +
                                            (o + t * 10) +
                                            (u + o * 10 + y * 100) ;
                                        intB = l + a * 10 + u * 100 + s * 1000 + u * 10000;
                                        if (intA == intB) {
                                            if ( c != l && c != o && c != s && c != e && c != t && c != y && c != u && c != a && l != o && l != s && l != e && l != t && l != y && l != u && l != a && o != s && o != e && o != t && o != y && o != u && o != a && s != e && s != t && s != y && s != u && s != a && e != t && e != y && e != u && e != a && t != y && t != u && t != a && y != u && y != a && u != a) {
                                                    strItemsResult = to_string(c) + to_string(l) + to_string(o) + to_string(s) + to_string(e) + to_string(t) + to_string(y) + to_string(u) + to_string(a);
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

label118 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
