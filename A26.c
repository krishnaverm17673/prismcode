#include <stdio.h>

int main() { //Q26: Write a program to print numbers from 1 to n.
    int n, i;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);


    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
