#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> numerosPrimos;

int CONTADOR = 0;

int josephus(int n, int k) {
    if (n == 1) {
        return 1;
    }

    k = numerosPrimos[CONTADOR++];

    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main() {
    for (int i = 2; i <= 32621; i++) {
        if (i > 3) {
            bool isPrimo = true;

            for (int j = sqrt(i); j >= 2; j--) {
                if (i % j == 0) {
                    isPrimo = false;
                    break;
                }
            }

            if (isPrimo) {
                numerosPrimos.push_back(i);
            }
        } else {
            numerosPrimos.push_back(i);
        }
    }

    int num;

    while (cin >> num) {
        if (num > 0) {
            CONTADOR = 0;

            cout << josephus(num, 0) << endl;
        } else {
            break;
        }
    }

    return 0;
}