#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // FATHER AND SON SEEDED
    strItems = "FATHERNDSO";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int f = 1; f < 10; f = f + 1) {
        for (int a = 1; a < 10; a = a + 1) {
            for (int t = 0; t < 10; t = t + 1) {
                for (int h = 0; h < 10; h = h + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int r = 0; r < 10; r = r + 1) {
                            for (int n = 0; n < 10; n = n + 1) {
                                for (int d = 0; d < 10; d = d + 1) {
                                    for (int s = 1; s < 10; s = s + 1) {
                                        for (int o = 0; o < 10; o = o + 1) {
                                            intA = (r + e * 10 + h * 100 + t * 1000 + a * 10000 + f * 100000) +
                                                (d + n * 10 + a * 100) +
                                                (n + o * 10 + s * 100) ;
                                            intB = d + e * 10 + d * 100 + e * 1000 + e * 10000 + s * 100000;
                                            if (intA == intB) {
                                                if ( f != a && f != t && f != h && f != e && f != r && f != n && f != d && f != s && f != o && a != t && a != h && a != e && a != r && a != n && a != d && a != s && a != o && t != h && t != e && t != r && t != n && t != d && t != s && t != o && h != e && h != r && h != n && h != d && h != s && h != o && e != r && e != n && e != d && e != s && e != o && r != n && r != d && r != s && r != o && n != d && n != s && n != o && d != s && d != o && s != o) {
                                                        strItemsResult = to_string(f) + to_string(a) + to_string(t) + to_string(h) + to_string(e) + to_string(r) + to_string(n) + to_string(d) + to_string(s) + to_string(o);
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
