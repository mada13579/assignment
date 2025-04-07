#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    cin >> x;
    for (int i = 0; i < x.length(); ++i) {
        int d = x[i] - '0';
        int transformed = 9 - d;


        if (transformed < d) {
            x[i] = '0' + transformed;
        }
    }

    cout << x << endl;

    return 0;
}
