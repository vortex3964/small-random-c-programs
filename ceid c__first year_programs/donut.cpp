#include <iostream>
#include <cstring>
#include <cmath>

const float PI2 = 2 * M_PI;

int main(){
    float A = 0, B = 0;
    float i, j;
    int k;
    char b[1760];
    float z[1760];

    std::cout << "\x1b[2J";  // Clear screen

    while (true) {
        std::memset(b, ' ', 1760);
        std::memset(z, 0, 7040);

        for (j = 0; j < PI2; j += 0.009) {
            for (i = 0; i < PI2; i += 0.009) {
                float c = std::sin(i), d = std::cos(j), e = std::sin(A), f = std::sin(j), g = std::cos(A);
                float h = d + 2, D = 1 / (c * h * e + f * g + 5);
                float l = std::cos(i), m = std::cos(B), n = std::sin(B);
                float t = c * h * g - f * e;

                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                if (22 > y && y > 0 && 80 > x && x > 0 && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }

        std::cout << "\x1b[H";
        for (k = 0; k < 1760; k++) {
            std::cout << (k % 80 ? b[k] : '\n');
        }

        A += 0.04;
        B += 0.02;
    }

    return 0;
}