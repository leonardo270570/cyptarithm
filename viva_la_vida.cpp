#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // VIVA LA VIDA DADDY
    strItems = "VIALDY";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int v = 1; v < 10; v = v + 1) {
        for (int i = 0; i < 10; i = i + 1) {
            for (int a = 0; a < 10; a = a + 1) {
                for (int l = 1; l < 10; l = l + 1) {
                    for (int d = 1; d < 10; d = d + 1) {
                        for (int y = 0; y < 10; y = y + 1) {
                            intA = (a + v * 10 + i * 100 + v * 1000) +
                                (a + l * 10) +
                                (a + d * 10 + i * 100 + v * 1000) ;
                            intB = y + d * 10 + d * 100 + a * 1000 + d * 10000;
                            if (intA == intB) {
                                if ( v != i && v != a && v != l && v != d && v != y && i != a && i != l && i != d && i != y && a != l && a != d && a != y && l != d && l != y && d != y) {
                                        strItemsResult = to_string(v) + to_string(i) + to_string(a) + to_string(l) + to_string(d) + to_string(y);
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
