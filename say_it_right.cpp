#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // SAY IT RIGHT HOSTS
    strItems = "SAYITRGHO";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int s = 1; s < 10; s = s + 1) {
        for (int a = 0; a < 10; a = a + 1) {
            for (int y = 0; y < 10; y = y + 1) {
                for (int i = 1; i < 10; i = i + 1) {
                    for (int t = 0; t < 10; t = t + 1) {
                        for (int r = 1; r < 10; r = r + 1) {
                            for (int g = 0; g < 10; g = g + 1) {
                                for (int h = 1; h < 10; h = h + 1) {
                                    for (int o = 0; o < 10; o = o + 1) {
                                        intA = (y + a * 10 + s * 100) +
                                            (t + i * 10) +
                                            (t + h * 10 + g * 100 + i * 1000 + r * 10000) ;
                                        intB = s + t * 10 + s * 100 + o * 1000 + h * 10000;
                                        if (intA == intB) {
                                            if ( s != a && s != y && s != i && s != t && s != r && s != g && s != h && s != o && a != y && a != i && a != t && a != r && a != g && a != h && a != o && y != i && y != t && y != r && y != g && y != h && y != o && i != t && i != r && i != g && i != h && i != o && t != r && t != g && t != h && t != o && r != g && r != h && r != o && g != h && g != o && h != o) {
                                                    strItemsResult = to_string(s) + to_string(a) + to_string(y) + to_string(i) + to_string(t) + to_string(r) + to_string(g) + to_string(h) + to_string(o);
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

label120 :
    cout << to_string(intCount) + " " + strItems + "\n";
    if (intCount == 1){
        cout << strItems + " = " + strItemsResult + "\n";
    };
    return 0;
}
