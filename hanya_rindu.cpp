#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // HANYA RINDU ROYDAH
    strItems = "HANYRIDUO";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int h = 1; h < 10; h = h + 1) {
        for (int a = 0; a < 10; a = a + 1) {
            for (int n = 0; n < 10; n = n + 1) {
                for (int y = 0; y < 10; y = y + 1) {
                    for (int r = 1; r < 10; r = r + 1) {
                        for (int i = 0; i < 10; i = i + 1) {
                            for (int d = 0; d < 10; d = d + 1) {
                                for (int u = 0; u < 10; u = u + 1) {
                                    for (int o = 0; o < 10; o = o + 1) {
                                        intA = (a + y * 10 + n * 100 + a * 1000 + h * 10000) +
                                            (u + d * 10 + n * 100 + i * 1000 + r * 10000) ;
                                        intB = h + a * 10 + d * 100 + y * 1000 + o * 10000 + r * 100000;
                                        if (intA == intB) {
                                            if ( h != a && h != n && h != y && h != r && h != i && h != d && h != u && h != o && a != n && a != y && a != r && a != i && a != d && a != u && a != o && n != y && n != r && n != i && n != d && n != u && n != o && y != r && y != i && y != d && y != u && y != o && r != i && r != d && r != u && r != o && i != d && i != u && i != o && d != u && d != o && u != o) {
                                                    strItemsResult = to_string(h) + to_string(a) + to_string(n) + to_string(y) + to_string(r) + to_string(i) + to_string(d) + to_string(u) + to_string(o);
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
