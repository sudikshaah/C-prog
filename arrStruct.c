#include <stdio.h>
struct A{
    int x;
};
int main(){
    int i;
    struct A arr[5]={{1},{2},{5},{6},{7}};
    for(i=0;i<5;i++){
        printf("%d ",arr[i].x);
        printf("\n");
        printf("%d ",arr[3].x);
    }
    return 0;
}