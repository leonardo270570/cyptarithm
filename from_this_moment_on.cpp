#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // FROM THIS MOMENT ON THIRST
    strItems = "FROMTHISEN";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int f = 1; f < 10; f = f + 1) {
        for (int r = 0; r < 10; r = r + 1) {
            for (int o = 1; o < 10; o = o + 1) {
                for (int m = 1; m < 10; m = m + 1) {
                    for (int t = 1; t < 10; t = t + 1) {
                        for (int h = 0; h < 10; h = h + 1) {
                            for (int i = 0; i < 10; i = i + 1) {
                                for (int s = 0; s < 10; s = s + 1) {
                                    for (int e = 0; e < 10; e = e + 1) {
                                        for (int n = 0; n < 10; n = n + 1) {
                                            intA = (m + o * 10 + r * 100 + f * 1000) +
                                                (s + i * 10 + h * 100 + t * 1000) +
                                                (t + n * 10 + e * 100 + m * 1000 + o * 10000 + m * 100000) +
                                                (n + o * 10) ;
                                            intB = t + s * 10 + r * 100 + i * 1000 + h * 10000 + t * 100000;
                                            if (intA == intB) {
                                                if ( f != r && f != o && f != m && f != t && f != h && f != i && f != s && f != e && f != n && r != o && r != m && r != t && r != h && r != i && r != s && r != e && r != n && o != m && o != t && o != h && o != i && o != s && o != e && o != n && m != t && m != h && m != i && m != s && m != e && m != n && t != h && t != i && t != s && t != e && t != n && h != i && h != s && h != e && h != n && i != s && i != e && i != n && s != e && s != n && e != n) {
                                                        strItemsResult = to_string(f) + to_string(r) + to_string(o) + to_string(m) + to_string(t) + to_string(h) + to_string(i) + to_string(s) + to_string(e) + to_string(n);
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
