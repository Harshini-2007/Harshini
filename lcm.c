#include <stdio.h>

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int hcf = 1; 
    int lcm = 1;

    for (int i = 2; i <= 5; ++i) {
        hcf = gcd(hcf, i);
        lcm *= i / hcf; // 
    }

   
    printf("lcm is %d.\n", lcm);

    return 0;
}

