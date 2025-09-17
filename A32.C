#include <stdio.h>

int main() { //Q32: Write a program to check if a number is a palindrome.

    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  

    
    while (num != 0) {
        remainder = num % 10;           
        reversed = reversed * 10 + remainder; 
        num = num / 10;                 
    }

    
    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is not a Palindrome.\n", original);
    }

    return 0;
}
