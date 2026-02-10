#include <stdio.h>
struct Point {
    int x, y;
};
/*int main() {
    struct Point p1 = {10, 20};
    struct Point p2 = p1;
    printf("p1.x= %d p1.y= %d\n",p1.x,p1.y);
    printf("p2.x= %d p2.y= %d\n ",p2.x,p2.y);
    printf(".................\n");
	p2.x = 30;  //modifying copy of structure
    printf("p1.x= %d p1.y= %d\n",p1.x,p1.y);
    printf("p2.x= %d p2.y= %d\n ",p2.x,p2.y);
    return 0;
}*/
int main() {
    struct Point p1 = {10, 20};
    struct Point *p2 = &p1;
    printf("p1.x= %d p1.y= %d\n",p1.x,p1.y);
    printf("p2->x= %d p2->y= %d\n ",p2->x,p2->y);
    printf(".................\n");
    p2->x = 30;  //modifying pointer using arrow operator
    printf("p1.x= %d p1.y= %d\n",p1.x,p1.y);
    printf("p2->x= %d p2->y= %d\n ",p2->x,p2->y);
    return 0;
}