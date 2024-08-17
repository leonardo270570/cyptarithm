#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // MAMMA MIA MILAN
    strItems = "MAILN";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int m = 1; m < 10; m = m + 1) {
        for (int a = 0; a < 10; a = a + 1) {
            for (int i = 0; i < 10; i = i + 1) {
                for (int l = 0; l < 10; l = l + 1) {
                    for (int n = 0; n < 10; n = n + 1) {
                        intA = (a + m * 10 + m * 100 + a * 1000 + m * 10000) +
                            (a + i * 10 + m * 100) ;
                        intB = n + a * 10 + l * 100 + i * 1000 + m * 10000;
                        if (intA == intB) {
                            if ( m != a && m != i && m != l && m != n && a != i && a != l && a != n && i != l && i != n && l != n) {
                                    strItemsResult = to_string(m) + to_string(a) + to_string(i) + to_string(l) + to_string(n);
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
