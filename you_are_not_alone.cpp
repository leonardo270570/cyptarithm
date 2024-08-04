#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // YOU ARE NOT ALONE TYSON
    strItems = "YOUARENTLS";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int y = 1; y < 10; y = y + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int u = 0; u < 10; u = u + 1) {
                for (int a = 1; a < 10; a = a + 1) {
                    for (int r = 0; r < 10; r = r + 1) {
                        for (int e = 0; e < 10; e = e + 1) {
                            for (int n = 1; n < 10; n = n + 1) {
                                for (int t = 1; t < 10; t = t + 1) {
                                    for (int l = 0; l < 10; l = l + 1) {
                                        for (int s = 0; s < 10; s = s + 1) {
                                            intA = (u + o * 10 + y * 100) +
                                                (e + r * 10 + a * 100) +
                                                (t + o * 10 + n * 100) +
                                                (e + n * 10 + o * 100 + l * 1000 + a * 10000) ;
                                            intB = n + o * 10 + s * 100 + y * 1000 + t * 10000;
                                            if (intA == intB) {
                                                if ( y != o && y != u && y != a && y != r && y != e && y != n && y != t && y != l && y != s && o != u && o != a && o != r && o != e && o != n && o != t && o != l && o != s && u != a && u != r && u != e && u != n && u != t && u != l && u != s && a != r && a != e && a != n && a != t && a != l && a != s && r != e && r != n && r != t && r != l && r != s && e != n && e != t && e != l && e != s && n != t && n != l && n != s && t != l && t != s && l != s) {
                                                        strItemsResult = to_string(y) + to_string(o) + to_string(u) + to_string(a) + to_string(r) + to_string(e) + to_string(n) + to_string(t) + to_string(l) + to_string(s);
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
