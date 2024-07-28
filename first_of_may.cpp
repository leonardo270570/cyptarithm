#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // FIRST OF MAY STORM
    strItems = "FIRSTOMAY";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int f = 1; f < 10; f = f + 1) {
        for (int i = 0; i < 10; i = i + 1) {
            for (int r = 0; r < 10; r = r + 1) {
                for (int s = 1; s < 10; s = s + 1) {
                    for (int t = 0; t < 10; t = t + 1) {
                        for (int o = 1; o < 10; o = o + 1) {
                            for (int m = 1; m < 10; m = m + 1) {
                                for (int a = 0; a < 10; a = a + 1) {
                                    for (int y = 0; y < 10; y = y + 1) {
                                        intA = (t + s * 10 + r * 100 + i * 1000 + f * 10000) +
                                            (f + o * 10) +
                                            (y + a * 10 + m * 100) ;
                                        intB = m + r * 10 + o * 100 + t * 1000 + s * 10000;
                                        if (intA == intB) {
                                            if ( f != i && f != r && f != s && f != t && f != o && f != m && f != a && f != y && i != r && i != s && i != t && i != o && i != m && i != a && i != y && r != s && r != t && r != o && r != m && r != a && r != y && s != t && s != o && s != m && s != a && s != y && t != o && t != m && t != a && t != y && o != m && o != a && o != y && m != a && m != y && a != y) {
                                                    strItemsResult = to_string(f) + to_string(i) + to_string(r) + to_string(s) + to_string(t) + to_string(o) + to_string(m) + to_string(a) + to_string(y);
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

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
