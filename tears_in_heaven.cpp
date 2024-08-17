#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // TEARS IN HEAVEN DESERT
    strItems = "TEARSINHVD";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int t = 1; t < 10; t = t + 1) {
        for (int e = 0; e < 10; e = e + 1) {
            for (int a = 0; a < 10; a = a + 1) {
                for (int r = 0; r < 10; r = r + 1) {
                    for (int s = 0; s < 10; s = s + 1) {
                        for (int i = 1; i < 10; i = i + 1) {
                            for (int n = 0; n < 10; n = n + 1) {
                                for (int h = 1; h < 10; h = h + 1) {
                                    for (int v = 0; v < 10; v = v + 1) {
                                        for (int d = 1; d < 10; d = d + 1) {
                                            intA = (s + r * 10 + a * 100 + e * 1000 + t * 10000) +
                                                (n + i * 10) +
                                                (n + e * 10 + v * 100 + a * 1000 + e * 10000 + h * 100000) ;
                                            intB = t + r * 10 + e * 100 + s * 1000 + e * 10000 + d * 100000;
                                            if (intA == intB) {
                                                if ( t != e && t != a && t != r && t != s && t != i && t != n && t != h && t != v && t != d && e != a && e != r && e != s && e != i && e != n && e != h && e != v && e != d && a != r && a != s && a != i && a != n && a != h && a != v && a != d && r != s && r != i && r != n && r != h && r != v && r != d && s != i && s != n && s != h && s != v && s != d && i != n && i != h && i != v && i != d && n != h && n != v && n != d && h != v && h != d && v != d) {
                                                        strItemsResult = to_string(t) + to_string(e) + to_string(a) + to_string(r) + to_string(s) + to_string(i) + to_string(n) + to_string(h) + to_string(v) + to_string(d);
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
