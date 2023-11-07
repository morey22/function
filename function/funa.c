#include<stdio.h>
int fun1();
int main(){
    int a = 10;
    a = fun1(a);
    printf("%d", a);
    return 0;
}
int fun1(int a){
    int b = 5;
    b = b+a;
    return b;
}

