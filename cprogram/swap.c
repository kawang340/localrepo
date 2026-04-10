#include<stdio.h>
void swap(int, int);
void _swap(int*, int*);
int main()
{
    int a=3, b=5;
    swap(a, b);
    printf("a=%d & b=%d\n", a, b);
    printf("pass by reference:\n");
    _swap(&a, &b);
    printf("a=%d & b=%d", a, b);
}
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d & y=%d\n", x, y);
}
void _swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
