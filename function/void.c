#include <stdio.h>
void england(){
    printf("Your are in England\n");
    return;
}
void australia(){
    printf("Your are in Australia\n");
    england();
    return;
}
void india(){
    printf("Your are in India\n");
    australia();
    return;
}
int main(){
    india();
    return 0;
}