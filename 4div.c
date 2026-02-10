#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n & 4){
        printf("\nNumber is divisible by 4\n");
    }
    else{
        printf("\nNumber is not divisible by 4\n");
    }
        return 0;
}