#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // SAIL OVER SEVEN SEAS CORNER
    strItems = "SAILOVERNC";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int s = 1; s < 10; s = s + 1) {
        for (int a = 0; a < 10; a = a + 1) {
            for (int i = 0; i < 10; i = i + 1) {
                for (int l = 0; l < 10; l = l + 1) {
                    for (int o = 1; o < 10; o = o + 1) {
                        for (int v = 0; v < 10; v = v + 1) {
                            for (int e = 0; e < 10; e = e + 1) {
                                for (int r = 0; r < 10; r = r + 1) {
                                    for (int n = 0; n < 10; n = n + 1) {
                                        for (int c = 1; c < 10; c = c + 1) {
                                            intA = (l + i * 10 + a * 100 + s * 1000) +
                                                (r + e * 10 + v * 100 + o * 1000) +
                                                (n + e * 10 + v * 100 + e * 1000 + s * 10000) +
                                                (s + a * 10 + e * 100 + s * 1000) ;
                                            intB = r + e * 10 + n * 100 + r * 1000 + o * 10000 + c * 100000;
                                            if (intA == intB) {
                                                if ( s != a && s != i && s != l && s != o && s != v && s != e && s != r && s != n && s != c && a != i && a != l && a != o && a != v && a != e && a != r && a != n && a != c && i != l && i != o && i != v && i != e && i != r && i != n && i != c && l != o && l != v && l != e && l != r && l != n && l != c && o != v && o != e && o != r && o != n && o != c && v != e && v != r && v != n && v != c && e != r && e != n && e != c && r != n && r != c && n != c) {
                                                        strItemsResult = to_string(s) + to_string(a) + to_string(i) + to_string(l) + to_string(o) + to_string(v) + to_string(e) + to_string(r) + to_string(n) + to_string(c);
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
