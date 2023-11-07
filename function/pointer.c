#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    *x = 7;
    printf("%d\n",a);
    printf("%p\n", x);
    printf("%p\n", &x);
    printf("%d\n", *x);
}