#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // ONE MOMENT IN TIME TEENTH
    strItems = "ONEMTIH";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int o = 1; o < 10; o = o + 1) {
        for (int n = 0; n < 10; n = n + 1) {
            for (int e = 0; e < 10; e = e + 1) {
                for (int m = 1; m < 10; m = m + 1) {
                    for (int t = 1; t < 10; t = t + 1) {
                        for (int i = 1; i < 10; i = i + 1) {
                            for (int h = 0; h < 10; h = h + 1) {
                                intA = (e + n * 10 + o * 100) +
                                    (t + n * 10 + e * 100 + m * 1000 + o * 10000 + m * 100000) +
                                    (n + i * 10) +
                                    (e + m * 10 + i * 100 + t * 1000) ;
                                intB = h + t * 10 + n * 100 + e * 1000 + e * 10000 + t * 100000;
                                if (intA == intB) {
                                    if ( o != n && o != e && o != m && o != t && o != i && o != h && n != e && n != m && n != t && n != i && n != h && e != m && e != t && e != i && e != h && m != t && m != i && m != h && t != i && t != h && i != h) {
                                            strItemsResult = to_string(o) + to_string(n) + to_string(e) + to_string(m) + to_string(t) + to_string(i) + to_string(h);
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
