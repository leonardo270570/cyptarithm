#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // DONT CRY JONI DIRGY
    strItems = "DONTCRYJIG";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int d = 1; d < 10; d = d + 1) {
        for (int o = 0; o < 10; o = o + 1) {
            for (int n = 0; n < 10; n = n + 1) {
                for (int t = 0; t < 10; t = t + 1) {
                    for (int c = 1; c < 10; c = c + 1) {
                        for (int r = 0; r < 10; r = r + 1) {
                            for (int y = 0; y < 10; y = y + 1) {
                                for (int j = 1; j < 10; j = j + 1) {
                                    for (int i = 0; i < 10; i = i + 1) {
                                        for (int g = 0; g < 10; g = g + 1) {
                                            intA = (t + n * 10 + o * 100 + d * 1000) +
                                                (y + r * 10 + c * 100) +
                                                (i + n * 10 + o * 100 + j * 1000) ;
                                            intB = y + g * 10 + r * 100 + i * 1000 + d * 10000;
                                            if (intA == intB) {
                                                if ( d != o && d != n && d != t && d != c && d != r && d != y && d != j && d != i && d != g && o != n && o != t && o != c && o != r && o != y && o != j && o != i && o != g && n != t && n != c && n != r && n != y && n != j && n != i && n != g && t != c && t != r && t != y && t != j && t != i && t != g && c != r && c != y && c != j && c != i && c != g && r != y && r != j && r != i && r != g && y != j && y != i && y != g && j != i && j != g && i != g) {
                                                        strItemsResult = to_string(d) + to_string(o) + to_string(n) + to_string(t) + to_string(c) + to_string(r) + to_string(y) + to_string(j) + to_string(i) + to_string(g);
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
    };

label1 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
