#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // CINTA ABADI IKATAN
    strItems = "CINTABDK";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int c = 1; c < 10; c = c + 1) {
        for (int i = 1; i < 10; i = i + 1) {
            for (int n = 0; n < 10; n = n + 1) {
                for (int t = 0; t < 10; t = t + 1) {
                    for (int a = 1; a < 10; a = a + 1) {
                        for (int b = 0; b < 10; b = b + 1) {
                            for (int d = 0; d < 10; d = d + 1) {
                                for (int k = 0; k < 10; k = k + 1) {
                                    intA = (a + t * 10 + n * 100 + i * 1000 + c * 10000) +
                                        (i + d * 10 + a * 100 + b * 1000 + a * 10000) ;
                                    intB = n + a * 10 + t * 100 + a * 1000 + k * 10000 + i * 100000;
                                    if (intA == intB) {
                                        if ( c != i && c != n && c != t && c != a && c != b && c != d && c != k && i != n && i != t && i != a && i != b && i != d && i != k && n != t && n != a && n != b && n != d && n != k && t != a && t != b && t != d && t != k && a != b && a != d && a != k && b != d && b != k && d != k) {
                                                strItemsResult = to_string(c) + to_string(i) + to_string(n) + to_string(t) + to_string(a) + to_string(b) + to_string(d) + to_string(k);
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

label100 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
