#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // VAYA CON DIOS DORIS
    strItems = "VAYCONDISR";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int v = 1; v < 10; v = v + 1) {
        for (int a = 0; a < 10; a = a + 1) {
            for (int y = 0; y < 10; y = y + 1) {
                for (int c = 1; c < 10; c = c + 1) {
                    for (int o = 0; o < 10; o = o + 1) {
                        for (int n = 0; n < 10; n = n + 1) {
                            for (int d = 1; d < 10; d = d + 1) {
                                for (int i = 0; i < 10; i = i + 1) {
                                    for (int s = 0; s < 10; s = s + 1) {
                                        for (int r = 0; r < 10; r = r + 1) {
                                            intA = (a + y * 10 + a * 100 + v * 1000) +
                                                (n + o * 10 + c * 100) +
                                                (s + o * 10 + i * 100 + d * 1000) ;
                                            intB = s + i * 10 + r * 100 + o * 1000 + d * 10000;
                                            if (intA == intB) {
                                                if ( v != a && v != y && v != c && v != o && v != n && v != d && v != i && v != s && v != r && a != y && a != c && a != o && a != n && a != d && a != i && a != s && a != r && y != c && y != o && y != n && y != d && y != i && y != s && y != r && c != o && c != n && c != d && c != i && c != s && c != r && o != n && o != d && o != i && o != s && o != r && n != d && n != i && n != s && n != r && d != i && d != s && d != r && i != s && i != r && s != r) {
                                                        strItemsResult = to_string(v) + to_string(a) + to_string(y) + to_string(c) + to_string(o) + to_string(n) + to_string(d) + to_string(i) + to_string(s) + to_string(r);
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
