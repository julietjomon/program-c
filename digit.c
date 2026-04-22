#include <stdio.h>

int main() {
    int num,sum;

    printf("Enter number: ");
    scanf("%d",&num);

    while(num>9){
        sum=0;
        while(num>0){
            sum=sum+num%10;
            num=num/10;
        }
        num=sum;
    }

    printf("Result: %d",num);
    return 0;
}

output
Enter number: 987
Result: 6

=== Code Execution Successful ===
