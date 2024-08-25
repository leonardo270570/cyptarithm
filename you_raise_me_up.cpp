#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // YOU RAISE ME UP YOURS
    strItems = "YOURAISEMP";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int y = 1; y < 10; y = y + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int u = 1; u < 10; u = u + 1) {
                for (int r = 1; r < 10; r = r + 1) {
                    for (int a = 0; a < 10; a = a + 1) {
                        for (int i = 0; i < 10; i = i + 1) {
                            for (int s = 0; s < 10; s = s + 1) {
                                for (int e = 0; e < 10; e = e + 1) {
                                    for (int m = 1; m < 10; m = m + 1) {
                                        for (int p = 0; p < 10; p = p + 1) {
                                            intA = (u + o * 10 + y * 100) +
                                                (e + s * 10 + i * 100 + a * 1000 + r * 10000) +
                                                (e + m * 10) +
                                                (p + u * 10) ;
                                            intB = s + r * 10 + u * 100 + o * 1000 + y * 10000;
                                            if (intA == intB) {
                                                if ( y != o && y != u && y != r && y != a && y != i && y != s && y != e && y != m && y != p && o != u && o != r && o != a && o != i && o != s && o != e && o != m && o != p && u != r && u != a && u != i && u != s && u != e && u != m && u != p && r != a && r != i && r != s && r != e && r != m && r != p && a != i && a != s && a != e && a != m && a != p && i != s && i != e && i != m && i != p && s != e && s != m && s != p && e != m && e != p && m != p) {
                                                        strItemsResult = to_string(y) + to_string(o) + to_string(u) + to_string(r) + to_string(a) + to_string(i) + to_string(s) + to_string(e) + to_string(m) + to_string(p);
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

label112 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
