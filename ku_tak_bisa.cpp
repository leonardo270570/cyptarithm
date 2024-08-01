#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // KU TAK BISA ASKIA
    strItems = "KUTABIS";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int k = 1; k < 10; k = k + 1) {
        for (int u = 0; u < 10; u = u + 1) {
            for (int t = 1; t < 10; t = t + 1) {
                for (int a = 1; a < 10; a = a + 1) {
                    for (int b = 1; b < 10; b = b + 1) {
                        for (int i = 0; i < 10; i = i + 1) {
                            for (int s = 0; s < 10; s = s + 1) {
                                intA = (u + k * 10) +
                                    (k + a * 10 + t * 100) +
                                    (a + s * 10 + i * 100 + b * 1000) ;
                                intB = a + i * 10 + k * 100 + s * 1000 + a * 10000;
                                if (intA == intB) {
                                    if ( k != u && k != t && k != a && k != b && k != i && k != s && u != t && u != a && u != b && u != i && u != s && t != a && t != b && t != i && t != s && a != b && a != i && a != s && b != i && b != s && i != s) {
                                            strItemsResult = to_string(k) + to_string(u) + to_string(t) + to_string(a) + to_string(b) + to_string(i) + to_string(s);
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
