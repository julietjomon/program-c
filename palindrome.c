#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf(" True(Palindrome) ");
    else
        printf(" False (not palindrome) ");

    return 0;
}

output
Enter an integer: 131
True (Palindrome)


=== Code Execution Successful ===
