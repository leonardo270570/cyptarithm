#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // OBLADI OBLADA ABROAD
    strItems = "OBLADIR";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int o = 1; o < 10; o = o + 1) {
        for (int b = 0; b < 10; b = b + 1) {
            for (int l = 0; l < 10; l = l + 1) {
                for (int a = 1; a < 10; a = a + 1) {
                    for (int d = 0; d < 10; d = d + 1) {
                        for (int i = 0; i < 10; i = i + 1) {
                            for (int r = 0; r < 10; r = r + 1) {
                                intA = (i + d * 10 + a * 100 + l * 1000 + b * 10000 + o * 100000) +
                                    (a + d * 10 + a * 100 + l * 1000 + b * 10000 + o * 100000) ;
                                intB = d + a * 10 + o * 100 + r * 1000 + b * 10000 + a * 100000;
                                if (intA == intB) {
                                    if ( o != b && o != l && o != a && o != d && o != i && o != r && b != l && b != a && b != d && b != i && b != r && l != a && l != d && l != i && l != r && a != d && a != i && a != r && d != i && d != r && i != r) {
                                            strItemsResult = to_string(o) + to_string(b) + to_string(l) + to_string(a) + to_string(d) + to_string(i) + to_string(r);
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

label101 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
