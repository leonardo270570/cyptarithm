#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // YOU ARE THE REASON NOORSY
    strItems = "YOUARETHSN";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int y = 1; y < 10; y = y + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int u = 0; u < 10; u = u + 1) {
                for (int a = 1; a < 10; a = a + 1) {
                    for (int r = 1; r < 10; r = r + 1) {
                        for (int e = 0; e < 10; e = e + 1) {
                            for (int t = 1; t < 10; t = t + 1) {
                                for (int h = 0; h < 10; h = h + 1) {
                                    for (int s = 0; s < 10; s = s + 1) {
                                        for (int n = 1; n < 10; n = n + 1) {
                                            intA = (u + o * 10 + y * 100) +
                                                (e + r * 10 + a * 100) +
                                                (e + h * 10 + t * 100) +
                                                (n + o * 10 + s * 100 + a * 1000 + e * 10000 + r * 100000) ;
                                            intB = y + s * 10 + r * 100 + o * 1000 + o * 10000 + n * 100000;
                                            if (intA == intB) {
                                                if ( y != o && y != u && y != a && y != r && y != e && y != t && y != h && y != s && y != n && o != u && o != a && o != r && o != e && o != t && o != h && o != s && o != n && u != a && u != r && u != e && u != t && u != h && u != s && u != n && a != r && a != e && a != t && a != h && a != s && a != n && r != e && r != t && r != h && r != s && r != n && e != t && e != h && e != s && e != n && t != h && t != s && t != n && h != s && h != n && s != n) {
                                                        strItemsResult = to_string(y) + to_string(o) + to_string(u) + to_string(a) + to_string(r) + to_string(e) + to_string(t) + to_string(h) + to_string(s) + to_string(n);
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
