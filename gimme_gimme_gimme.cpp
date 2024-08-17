#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // GIMME GIMME GIMME PEGGY
    strItems = "GIMEPY";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int g = 1; g < 10; g = g + 1) {
        for (int i = 0; i < 10; i = i + 1) {
            for (int m = 0; m < 10; m = m + 1) {
                for (int e = 0; e < 10; e = e + 1) {
                    for (int p = 1; p < 10; p = p + 1) {
                        for (int y = 0; y < 10; y = y + 1) {
                            intA = (e + m * 10 + m * 100 + i * 1000 + g * 10000) +
                                (e + m * 10 + m * 100 + i * 1000 + g * 10000) +
                                (e + m * 10 + m * 100 + i * 1000 + g * 10000) ;
                            intB = y + g * 10 + g * 100 + e * 1000 + p * 10000;
                            if (intA == intB) {
                                if ( g != i && g != m && g != e && g != p && g != y && i != m && i != e && i != p && i != y && m != e && m != p && m != y && e != p && e != y && p != y) {
                                        strItemsResult = to_string(g) + to_string(i) + to_string(m) + to_string(e) + to_string(p) + to_string(y);
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
