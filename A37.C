#include <stdio.h>
int findHCF(int a, int b) { //Q37: Write a program to find the LCM of two numbers.
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    hcf = findHCF(a, b);
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
