#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // HAKIKAT CINTA ADIPATI
    strItems = "HAKITCNDP";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int h = 1; h < 10; h = h + 1) {
        for (int a = 1; a < 10; a = a + 1) {
            for (int k = 0; k < 10; k = k + 1) {
                for (int i = 0; i < 10; i = i + 1) {
                    for (int t = 0; t < 10; t = t + 1) {
                        for (int c = 1; c < 10; c = c + 1) {
                            for (int n = 0; n < 10; n = n + 1) {
                                for (int d = 0; d < 10; d = d + 1) {
                                    for (int p = 0; p < 10; p = p + 1) {
                                        intA = (t + a * 10 + k * 100 + i * 1000 + k * 10000 + a * 100000 + h * 1000000) +
                                            (a + t * 10 + n * 100 + i * 1000 + c * 10000) ;
                                        intB = i + t * 10 + a * 100 + p * 1000 + i * 10000 + d * 100000 + a * 1000000;
                                        if (intA == intB) {
                                            if ( h != a && h != k && h != i && h != t && h != c && h != n && h != d && h != p && a != k && a != i && a != t && a != c && a != n && a != d && a != p && k != i && k != t && k != c && k != n && k != d && k != p && i != t && i != c && i != n && i != d && i != p && t != c && t != n && t != d && t != p && c != n && c != d && c != p && n != d && n != p && d != p) {
                                                    strItemsResult = to_string(h) + to_string(a) + to_string(k) + to_string(i) + to_string(t) + to_string(c) + to_string(n) + to_string(d) + to_string(p);
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

label90 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
