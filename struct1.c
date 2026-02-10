#include <stdio.h>
#pragma pack(1)  //to avoid padding
struct A{
    char a;
    char b;
    int i;  //size will be 8 because of padding
};
struct B{
    char a;
    int i;  //size will be 12 because of padding
    char b;
};
struct C{
    char a;
    int i;  //size will be 5 with pragma, 8 without pragma
};
int main(){
    printf("%d\n",sizeof(struct A));
    printf("%d\n",sizeof(struct B));
    printf("%d\n",sizeof(struct C));
}