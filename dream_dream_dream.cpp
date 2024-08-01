#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // DREAM DREAM DREAM THREE
    strItems = "DREAMTH";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int d = 1; d < 10; d = d + 1) {
        for (int r = 0; r < 10; r = r + 1) {
            for (int e = 0; e < 10; e = e + 1) {
                for (int a = 0; a < 10; a = a + 1) {
                    for (int m = 0; m < 10; m = m + 1) {
                        for (int t = 1; t < 10; t = t + 1) {
                            for (int h = 0; h < 10; h = h + 1) {
                                intA = (m + a * 10 + e * 100 + r * 1000 + d * 10000) +
                                    (m + a * 10 + e * 100 + r * 1000 + d * 10000) +
                                    (m + a * 10 + e * 100 + r * 1000 + d * 10000) ;
                                intB = e + e * 10 + r * 100 + h * 1000 + t * 10000;
                                if (intA == intB) {
                                    if ( d != r && d != e && d != a && d != m && d != t && d != h && r != e && r != a && r != m && r != t && r != h && e != a && e != m && e != t && e != h && a != m && a != t && a != h && m != t && m != h && t != h) {
                                            strItemsResult = to_string(d) + to_string(r) + to_string(e) + to_string(a) + to_string(m) + to_string(t) + to_string(h);
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

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
