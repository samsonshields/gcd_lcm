#include <iostream>
using namespace std;

pair<int, int> prompt() {
    int x, y;
    while (true) {
        cout << "Input 2 numbers:" << endl;
        cin >> x >> y;

        if (x <= 0 or y <= 0) {
            cout << "Out of range! Try again. " << endl;
        } else {
            break;
        }
    }
    return make_pair(x, y);
}

int find_gcd(int x, int y) {
    int gcd = 1;
    int use = (x < y) ? x : y;
    while (use >= 1) {
        if (x % use == 0 && y % use == 0) {
            gcd = use;
            break;
        }
        use -= 1;
    }
    return gcd;
}

int find_lcm(int x, int y) {
    int gcd = find_gcd(x, y); // Use the GCD from the same input
    int lcm = (x * y) / gcd;
    return lcm;
}

int main() {
    pair<int, int> p = prompt();
    int x = p.first, y = p.second;

    int gcd = find_gcd(x, y);
    int lcm = find_lcm(x, y);

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}

