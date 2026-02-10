#include <stdio.h>
//if a number is powe of 2 using bitwise operator
int main() {
    int n,i;
    printf("Enter the number and bit position: ");
    scanf("%d %d", &n, &i);
    int bit=(n>>i)&1;
    printf("\nFor getting the bit at position %d is %d\n",i,bit);
    return 0;
}