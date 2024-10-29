#include <iostream>
#include <cmath>

int main() {
    std::cout << "Triple pitagóricos encontrados:\n";

    for (int a = 1; a <= 20; a++) {
        for (int b = a; b <= 20; b++) {
            int c = static_cast<int>(sqrt(a * a + b * b));
            if (c * c == a * a + b * b) {
                std::cout << a << " - " << b << " - " << c << std::endl;
            }
        }
    }

    return 0;
}
