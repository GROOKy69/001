#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (a > 0 && b > 0) {
        if (a < b) swap(a, b);

        int squareSize = b;
        int count = a / b;
        cout<<squareSize<<" "<<count<< endl;

        a = a % b;
    }

    return 0;
}
