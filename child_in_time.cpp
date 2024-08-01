#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // CHILD IN TIME DENTAL
    strItems = "CHILDNTMEA";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int c = 1; c < 10; c = c + 1) {
        for (int h = 0; h < 10; h = h + 1) {
            for (int i = 1; i < 10; i = i + 1) {
                for (int l = 0; l < 10; l = l + 1) {
                    for (int d = 1; d < 10; d = d + 1) {
                        for (int n = 0; n < 10; n = n + 1) {
                            for (int t = 1; t < 10; t = t + 1) {
                                for (int m = 0; m < 10; m = m + 1) {
                                    for (int e = 0; e < 10; e = e + 1) {
                                        for (int a = 0; a < 10; a = a + 1) {
                                            intA = (d + l * 10 + i * 100 + h * 1000 + c * 10000) +
                                                (n + i * 10) +
                                                (e + m * 10 + i * 100 + t * 1000) ;
                                            intB = l + a * 10 + t * 100 + n * 1000 + e * 10000 + d * 100000;
                                            if (intA == intB) {
                                                if ( c != h && c != i && c != l && c != d && c != n && c != t && c != m && c != e && c != a && h != i && h != l && h != d && h != n && h != t && h != m && h != e && h != a && i != l && i != d && i != n && i != t && i != m && i != e && i != a && l != d && l != n && l != t && l != m && l != e && l != a && d != n && d != t && d != m && d != e && d != a && n != t && n != m && n != e && n != a && t != m && t != e && t != a && m != e && m != a && e != a) {
                                                        strItemsResult = to_string(c) + to_string(h) + to_string(i) + to_string(l) + to_string(d) + to_string(n) + to_string(t) + to_string(m) + to_string(e) + to_string(a);
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
