#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // I HAVE A DREAM SARAH
    strItems = "IHAVEDRMS";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int i = 1; i < 10; i = i + 1) {
        for (int h = 1; h < 10; h = h + 1) {
            for (int a = 1; a < 10; a = a + 1) {
                for (int v = 0; v < 10; v = v + 1) {
                    for (int e = 0; e < 10; e = e + 1) {
                        for (int d = 1; d < 10; d = d + 1) {
                            for (int r = 0; r < 10; r = r + 1) {
                                for (int m = 0; m < 10; m = m + 1) {
                                    for (int s = 1; s < 10; s = s + 1) {
                                        intA = (i) +
                                            (e + v * 10 + a * 100 + h * 1000) +
                                            (a) +
                                            (m + a * 10 + e * 100 + r * 1000 + d * 10000) ;
                                        intB = h + a * 10 + r * 100 + a * 1000 + s * 10000;
                                        if (intA == intB) {
                                            if ( i != h && i != a && i != v && i != e && i != d && i != r && i != m && i != s && h != a && h != v && h != e && h != d && h != r && h != m && h != s && a != v && a != e && a != d && a != r && a != m && a != s && v != e && v != d && v != r && v != m && v != s && e != d && e != r && e != m && e != s && d != r && d != m && d != s && r != m && r != s && m != s) {
                                                    strItemsResult = to_string(i) + to_string(h) + to_string(a) + to_string(v) + to_string(e) + to_string(d) + to_string(r) + to_string(m) + to_string(s);
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

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
