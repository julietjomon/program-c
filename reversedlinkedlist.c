#include <stdio.h>

int main() {
    int n,i,a[50];

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Reversed array:\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);

    return 0;
}

output
Enter size: 4
Enter elements:
2
3
6
4
Reversed array:
4 6 3 2 

=== Code Execution Successful ===
