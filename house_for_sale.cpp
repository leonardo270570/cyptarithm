#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // HOUSE FOR SALE FAMOUS
    strItems = "HOUSEFRALM";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int h = 1; h < 10; h = h + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int u = 0; u < 10; u = u + 1) {
                for (int s = 1; s < 10; s = s + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int f = 1; f < 10; f = f + 1) {
                            for (int r = 0; r < 10; r = r + 1) {
                                for (int a = 0; a < 10; a = a + 1) {
                                    for (int l = 0; l < 10; l = l + 1) {
                                        for (int m = 0; m < 10; m = m + 1) {
                                            intA = (e + s * 10 + u * 100 + o * 1000 + h * 10000) +
                                                (r + o * 10 + f * 100) +
                                                (e + l * 10 + a * 100 + s * 1000) ;
                                            intB = s + u * 10 + o * 100 + m * 1000 + a * 10000 + f * 100000;
                                            if (intA == intB) {
                                                if ( h != o && h != u && h != s && h != e && h != f && h != r && h != a && h != l && h != m && o != u && o != s && o != e && o != f && o != r && o != a && o != l && o != m && u != s && u != e && u != f && u != r && u != a && u != l && u != m && s != e && s != f && s != r && s != a && s != l && s != m && e != f && e != r && e != a && e != l && e != m && f != r && f != a && f != l && f != m && r != a && r != l && r != m && a != l && a != m && l != m) {
                                                        strItemsResult = to_string(h) + to_string(o) + to_string(u) + to_string(s) + to_string(e) + to_string(f) + to_string(r) + to_string(a) + to_string(l) + to_string(m);
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

label108 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
