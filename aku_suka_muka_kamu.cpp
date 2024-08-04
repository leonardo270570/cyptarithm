#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // AKU SUKA MUKA KAMU
    strItems = "AKUSM";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int a = 1; a < 10; a = a + 1) {
        for (int k = 1; k < 10; k = k + 1) {
            for (int u = 0; u < 10; u = u + 1) {
                for (int s = 1; s < 10; s = s + 1) {
                    for (int m = 1; m < 10; m = m + 1) {
                        intA = (u + k * 10 + a * 100) +
                            (a + k * 10 + u * 100 + s * 1000) +
                            (a + k * 10 + u * 100 + m * 1000) ;
                        intB = u + m * 10 + a * 100 + k * 1000;
                        if (intA == intB) {
                            if ( a != k && a != u && a != s && a != m && k != u && k != s && k != m && u != s && u != m && s != m) {
                                    strItemsResult = to_string(a) + to_string(k) + to_string(u) + to_string(s) + to_string(m);
                                    cout << strItemsResult + " \n";
                                    intCount = intCount + 1;
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
