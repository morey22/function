#include<stdio.h>
int add(int a, int b){
    return (a+b);
}
int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = add(a,b);
    printf("%d", sum);
    return 0;
}