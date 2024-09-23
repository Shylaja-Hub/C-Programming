#include <stdio.h>

int main() {
    int arraysize;
    printf("Enter the size of array: ");
    scanf("%d", &arraysize);

    int arr[arraysize];
    printf("Enter the array elements: \n");
    for (int i = 0; i < arraysize; i++) { // Corrected loop condition
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion: \n");
    for (int i = 0; i < arraysize; i++) { // Corrected loop condition
        printf("%d\n", arr[i]);
    }

    int i, lastelement;
    printf("Enter the element to insert at last: ");
    scanf("%d",&arr[i]);
    printf("\n");

    arr[arraysize - 1] = lastelement;

    printf("Array after insertion: \n");
    for (int i = 0; i < arraysize; i++) {
        printf("%d\n",&lastelement);
    }

    return 0;
}
