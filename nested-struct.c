#include <stdio.h>
struct Inner{
    int x;
};
struct Outer {
    struct Inner inner;
    int y;
};
int main(){
    struct Outer out={{10},20};
    printf("inner.x = %d, outer.y = %d\n", out.inner.x, out.y);
    return 0;
}