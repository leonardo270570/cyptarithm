#include <iostream>

using namespace std;

int main()
{
    string strItems;
    string strItemsResult;
    int intA;
    int intB;
    int intCount;

    // HERE COMES THE SUN METEOR
    strItems = "HERCOMSTUN";
    intA = 0;
    intB = 0;
    intCount = 0;

    for (int h = 1; h < 10; h = h + 1) {
        for (int e = 0; e < 10; e = e + 1) {
            for (int r = 0; r < 10; r = r + 1) {
                for (int c = 1; c < 10; c = c + 1) {
                    for (int o = 0; o < 10; o = o + 1) {
                        for (int m = 1; m < 10; m = m + 1) {
                            for (int s = 1; s < 10; s = s + 1) {
                                for (int t = 1; t < 10; t = t + 1) {
                                    for (int u = 0; u < 10; u = u + 1) {
                                        for (int n = 0; n < 10; n = n + 1) {
                                            intA = (e + r * 10 + e * 100 + h * 1000) +
                                                (s + e * 10 + m * 100 + o * 1000 + c * 10000) +
                                                (e + h * 10 + t * 100) +
                                                (n + u * 10 + s * 100) ;
                                            intB = r + o * 10 + e * 100 + t * 1000 + e * 10000 + m * 100000;
                                            if (intA == intB) {
                                                if ( h != e && h != r && h != c && h != o && h != m && h != s && h != t && h != u && h != n && e != r && e != c && e != o && e != m && e != s && e != t && e != u && e != n && r != c && r != o && r != m && r != s && r != t && r != u && r != n && c != o && c != m && c != s && c != t && c != u && c != n && o != m && o != s && o != t && o != u && o != n && m != s && m != t && m != u && m != n && s != t && s != u && s != n && t != u && t != n && u != n) {
                                                        strItemsResult = to_string(h) + to_string(e) + to_string(r) + to_string(c) + to_string(o) + to_string(m) + to_string(s) + to_string(t) + to_string(u) + to_string(n);
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
