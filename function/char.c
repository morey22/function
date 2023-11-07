#include<stdio.h>
char fun();
int main(){
    char c = fun();
    printf("character is: %c", c);
    return 0;
}

char fun(){
    return 'a';
}