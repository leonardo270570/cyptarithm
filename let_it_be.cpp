#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // LET IT BE BUTT
    strItems = "LETIBU";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int l = 1; l < 10; l = l + 1) {
        for (int e = 0; e < 10; e = e + 1) {
            for (int t = 0; t < 10; t = t + 1) {
                for (int i = 1; i < 10; i = i + 1) {
                    for (int b = 1; b < 10; b = b + 1) {
                        for (int u = 0; u < 10; u = u + 1) {
                            intA = (t + e * 10 + l * 100) +
                                (t + i * 10) +
                                (e + b * 10) ;
                            intB = t + t * 10 + u * 100 + b * 1000;
                            if (intA == intB) {
                                if ( l != e && l != t && l != i && l != b && l != u && e != t && e != i && e != b && e != u && t != i && t != b && t != u && i != b && i != u && b != u) {
                                        strItemsResult = to_string(l) + to_string(e) + to_string(t) + to_string(i) + to_string(b) + to_string(u);
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

label113 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
