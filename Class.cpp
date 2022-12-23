#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int dk[n], ck[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> dk[i] >> ck[i];
    }
    int min = ck[0];
    for (int i = 0; i < n; ++i) {
        if (ck[i] < min) {
            min = ck[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += dk[i] * min;
    }
    std::cout << sum;
    return 0;
}