#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // AMAZING GRACE ARMENIA
    strItems = "AMZINGRCE";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int a = 1; a < 10; a = a + 1) {
        for (int m = 0; m < 10; m = m + 1) {
            for (int z = 0; z < 10; z = z + 1) {
                for (int i = 0; i < 10; i = i + 1) {
                    for (int n = 0; n < 10; n = n + 1) {
                        for (int g = 1; g < 10; g = g + 1) {
                            for (int r = 0; r < 10; r = r + 1) {
                                for (int c = 0; c < 10; c = c + 1) {
                                    for (int e = 0; e < 10; e = e + 1) {
                                        intA = (g + n * 10 + i * 100 + z * 1000 + a * 10000 + m * 100000 + a * 1000000) +
                                            (e + c * 10 + a * 100 + r * 1000 + g * 10000) ;
                                        intB = a + i * 10 + n * 100 + e * 1000 + m * 10000 + r * 100000 + a * 1000000;
                                        if (intA == intB) {
                                            if ( a != m && a != z && a != i && a != n && a != g && a != r && a != c && a != e && m != z && m != i && m != n && m != g && m != r && m != c && m != e && z != i && z != n && z != g && z != r && z != c && z != e && i != n && i != g && i != r && i != c && i != e && n != g && n != r && n != c && n != e && g != r && g != c && g != e && r != c && r != e && c != e) {
                                                    strItemsResult = to_string(a) + to_string(m) + to_string(z) + to_string(i) + to_string(n) + to_string(g) + to_string(r) + to_string(c) + to_string(e);
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

label109 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
