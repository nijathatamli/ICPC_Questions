#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    bool negative = false;
    if (n[0] == '-') {
        negative = true;
        n = n.substr(1); // remove '-'
    }

    string integer_part, fractional_part;
    size_t dot_pos = n.find('.');

    if (dot_pos != string::npos) {
        integer_part = n.substr(0, dot_pos);
        fractional_part = n.substr(dot_pos + 1);
    } else {
        integer_part = n;
        fractional_part = "00";
    }

    // always 2 digits for cents
    while (fractional_part.size() < 2)
        fractional_part += '0';
    fractional_part = fractional_part.substr(0, 2);

    // Add commas to integer part
    string formatted = "";
    int count = 0;
    for (int i = integer_part.size() - 1; i >= 0; i--) {
        formatted += integer_part[i];
        count++;
        if (count == 3 && i != 0) {
            formatted += ',';
            count = 0;
        }
    }
    reverse(formatted.begin(), formatted.end());

    string result = "$" + formatted + "." + fractional_part;
    if (negative)
        result = "(" + result + ")";

    cout << result << endl;
    return 0;
}
