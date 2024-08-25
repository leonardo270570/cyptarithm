#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // TWIST AND SHOUT WINDOW
    strItems = "TWISANDHOU";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int t = 1; t < 10; t = t + 1) {
        for (int w = 1; w < 10; w = w + 1) {
            for (int i = 0; i < 10; i = i + 1) {
                for (int s = 1; s < 10; s = s + 1) {
                    for (int a = 1; a < 10; a = a + 1) {
                        for (int n = 0; n < 10; n = n + 1) {
                            for (int d = 0; d < 10; d = d + 1) {
                                for (int h = 0; h < 10; h = h + 1) {
                                    for (int o = 0; o < 10; o = o + 1) {
                                        for (int u = 0; u < 10; u = u + 1) {
                                            intA = (t + s * 10 + i * 100 + w * 1000 + t * 10000) +
                                                (d + n * 10 + a * 100) +
                                                (t + u * 10 + o * 100 + h * 1000 + s * 10000) ;
                                            intB = w + o * 10 + d * 100 + n * 1000 + i * 10000 + w * 100000;
                                            if (intA == intB) {
                                                if ( t != w && t != i && t != s && t != a && t != n && t != d && t != h && t != o && t != u && w != i && w != s && w != a && w != n && w != d && w != h && w != o && w != u && i != s && i != a && i != n && i != d && i != h && i != o && i != u && s != a && s != n && s != d && s != h && s != o && s != u && a != n && a != d && a != h && a != o && a != u && n != d && n != h && n != o && n != u && d != h && d != o && d != u && h != o && h != u && o != u) {
                                                        strItemsResult = to_string(t) + to_string(w) + to_string(i) + to_string(s) + to_string(a) + to_string(n) + to_string(d) + to_string(h) + to_string(o) + to_string(u);
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

label102 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
