#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; //read num as str

    for (int i = 0; i < s.size(); ++i) {
        int digit = s[i] - '0'; //char to int
        int transformedDigit = 9 - digit; //chewbacca digit

        // check for given conditions if (9-t) or 0
        if (transformedDigit < digit && !(i == 0 && transformedDigit == 0)) {
            s[i] = transformedDigit + '0'; //keep the smaller value
        }
    }
    cout << s;
    return 0;
}
