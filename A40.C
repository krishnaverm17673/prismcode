#include <stdio.h>
#include <string.h>

int main() { //Q40: Write a program to find the 1’s complement of a binary number and print it.
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);


    for (int i = 0; i < len; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    printf("1's complement: %s\n", binary);

    return 0;
}
