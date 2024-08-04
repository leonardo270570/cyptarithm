#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // AYAT AYAT CINTA NANCY
    strItems = "AYTCIN";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int a = 1; a < 10; a = a + 1) {
        for (int y = 0; y < 10; y = y + 1) {
            for (int t = 0; t < 10; t = t + 1) {
                for (int c = 1; c < 10; c = c + 1) {
                    for (int i = 0; i < 10; i = i + 1) {
                        for (int n = 1; n < 10; n = n + 1) {
                            intA = (t + a * 10 + y * 100 + a * 1000) +
                                (t + a * 10 + y * 100 + a * 1000) +
                                (a + t * 10 + n * 100 + i * 1000 + c * 10000) ;
                            intB = y + c * 10 + n * 100 + a * 1000 + n * 10000;
                            if (intA == intB) {
                                if ( a != y && a != t && a != c && a != i && a != n && y != t && y != c && y != i && y != n && t != c && t != i && t != n && c != i && c != n && i != n) {
                                        strItemsResult = to_string(a) + to_string(y) + to_string(t) + to_string(c) + to_string(i) + to_string(n);
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

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
