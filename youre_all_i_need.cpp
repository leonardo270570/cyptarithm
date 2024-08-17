#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // YOURE ALL I NEED EUDORA
    strItems = "YOUREALIND";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int y = 1; y < 10; y = y + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int u = 0; u < 10; u = u + 1) {
                for (int r = 0; r < 10; r = r + 1) {
                    for (int e = 1; e < 10; e = e + 1) {
                        for (int a = 1; a < 10; a = a + 1) {
                            for (int l = 0; l < 10; l = l + 1) {
                                for (int i = 1; i < 10; i = i + 1) {
                                    for (int n = 1; n < 10; n = n + 1) {
                                        for (int d = 0; d < 10; d = d + 1) {
                                            intA = (e + r * 10 + u * 100 + o * 1000 + y * 10000) +
                                                (l + l * 10 + a * 100) +
                                                (i) +
                                                (d + e * 10 + e * 100 + n * 1000) ;
                                            intB = a + r * 10 + o * 100 + d * 1000 + u * 10000 + e * 100000;
                                            if (intA == intB) {
                                                if ( y != o && y != u && y != r && y != e && y != a && y != l && y != i && y != n && y != d && o != u && o != r && o != e && o != a && o != l && o != i && o != n && o != d && u != r && u != e && u != a && u != l && u != i && u != n && u != d && r != e && r != a && r != l && r != i && r != n && r != d && e != a && e != l && e != i && e != n && e != d && a != l && a != i && a != n && a != d && l != i && l != n && l != d && i != n && i != d && n != d) {
                                                        strItemsResult = to_string(y) + to_string(o) + to_string(u) + to_string(r) + to_string(e) + to_string(a) + to_string(l) + to_string(i) + to_string(n) + to_string(d);
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
