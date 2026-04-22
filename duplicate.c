#include <stdio.h>

int main() {
    int n, i, j, arr[100], found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
    }

    if(found)
        printf("Duplicate found");
    else
        printf("All elements are distinct");

    return 0;
}

ouput
Enter size: 5
Enter elements:
1
2
3
2
5
true

=== Code Execution Successful ===
