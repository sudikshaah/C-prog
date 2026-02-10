#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n & 1){
        printf("\nOdd number\n");
    }
    else{
        printf("\nEven number\n");
    }
        return 0;
}