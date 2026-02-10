#include <stdio.h>
#include <stdlib.h>  // Required for malloc() and free()
int main() 
{
    int *ptr;
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Dynamically allocate memory for n integers
    ptr = (int *)malloc(n * sizeof(int));
    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Memory successfully allocated using malloc.\n");
    // Taking input from user
    printf("Initial values:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", ptr[i]);
    }
    printf("\nEnter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    // Displaying the elements
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    // Freeing the allocated memory
    free(ptr);
    printf("\nMemory successfully freed.\n");
    return 0;
}