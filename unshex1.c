#include <stdio.h>
int main(){
    unsigned char a=0xAB;
    a= (a>>4)&(a<<4);
    printf("%02X\n",a);
}