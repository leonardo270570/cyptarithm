#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // SHAPE OF YOU UPBYE
    strItems = "SHAPEOFYUB";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int s = 1; s < 10; s = s + 1) {
        for (int h = 0; h < 10; h = h + 1) {
            for (int a = 0; a < 10; a = a + 1) {
                for (int p = 0; p < 10; p = p + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int o = 1; o < 10; o = o + 1) {
                            for (int f = 0; f < 10; f = f + 1) {
                                for (int y = 1; y < 10; y = y + 1) {
                                    for (int u = 1; u < 10; u = u + 1) {
                                        for (int b = 0; b < 10; b = b + 1) {
                                            intA = (e + p * 10 + a * 100 + h * 1000 + s * 10000) +
                                                (f + o * 10) +
                                                (u + o * 10 + y * 100) ;
                                            intB = e + y * 10 + b * 100 + p * 1000 + u * 10000;
                                            if (intA == intB) {
                                                if ( s != h && s != a && s != p && s != e && s != o && s != f && s != y && s != u && s != b && h != a && h != p && h != e && h != o && h != f && h != y && h != u && h != b && a != p && a != e && a != o && a != f && a != y && a != u && a != b && p != e && p != o && p != f && p != y && p != u && p != b && e != o && e != f && e != y && e != u && e != b && o != f && o != y && o != u && o != b && f != y && f != u && f != b && y != u && y != b && u != b) {
                                                        strItemsResult = to_string(s) + to_string(h) + to_string(a) + to_string(p) + to_string(e) + to_string(o) + to_string(f) + to_string(y) + to_string(u) + to_string(b);
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

label121 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
