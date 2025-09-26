#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {15, 20};
    struct Point *ptr = &p;

    ptr->x = 150;
    ptr->y = 100;
    printf("x = %d\ny = %d\n", ptr->x, ptr->y);

}
