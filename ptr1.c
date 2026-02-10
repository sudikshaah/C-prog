#include <stdio.h>
int main(){
    int a[]={1,3,5,7,9};
    int *ptr=(int*)(&a+1);
    printf("%p\n", (&a+1));
    printf("%p\n", a);
    printf("%p\n", &a);
    printf("%d\n", *(a+1)**(ptr-4));
    return 0;
    }