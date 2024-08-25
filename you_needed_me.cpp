#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // YOU NEEDED ME SOONLY
    strItems = "YOUNEDMSL";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int y = 1; y < 10; y = y + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int u = 0; u < 10; u = u + 1) {
                for (int n = 1; n < 10; n = n + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int d = 0; d < 10; d = d + 1) {
                            for (int m = 1; m < 10; m = m + 1) {
                                for (int s = 1; s < 10; s = s + 1) {
                                    for (int l = 0; l < 10; l = l + 1) {
                                        intA = (u + o * 10 + y * 100) +
                                            (d + e * 10 + d * 100 + e * 1000 + e * 10000 + n * 100000) +
                                            (e + m * 10) ;
                                        intB = y + l * 10 + n * 100 + o * 1000 + o * 10000 + s * 100000;
                                        if (intA == intB) {
                                            if ( y != o && y != u && y != n && y != e && y != d && y != m && y != s && y != l && o != u && o != n && o != e && o != d && o != m && o != s && o != l && u != n && u != e && u != d && u != m && u != s && u != l && n != e && n != d && n != m && n != s && n != l && e != d && e != m && e != s && e != l && d != m && d != s && d != l && m != s && m != l && s != l) {
                                                    strItemsResult = to_string(y) + to_string(o) + to_string(u) + to_string(n) + to_string(e) + to_string(d) + to_string(m) + to_string(s) + to_string(l);
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

label92 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
