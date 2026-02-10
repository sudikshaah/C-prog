#include <stdio.h>
//if a number is powe of 2 using bitwise operator
int main() {
    int n,i;
    printf("Enter the number and bit position: ");
    scanf("%d %d", &n, &i);
    n=n|(1<<i);
    printf("\nFor setting the bit at position %d is %d\n",i,n );
    return 0;
}