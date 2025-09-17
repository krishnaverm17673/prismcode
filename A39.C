#include <stdio.h>

int main() { //Q39: Write a program to find the product of odd digits of a number.
    int num, digit, product = 1;
    int hasOdd = 0;  

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  

    while (num != 0) {
        digit = num % 10;   
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;  
    }

    if (hasOdd)
        printf("Product of odd digits of %d is: %d\n", original, product);
    else
        printf("%d has no odd digits.\n", original);

    return 0;
}
