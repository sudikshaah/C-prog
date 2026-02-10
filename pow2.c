#include <stdio.h>
//if a number is powe of 2 using bitwise operator
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n > 0 && (n & (n-1)) == 0 ){
        printf("\nNumber is a power of 2\n");
    }
    else{
        printf("\nNumber is not a power of 2\n");
    }
    return 0;
}