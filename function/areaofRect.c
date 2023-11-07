#include<stdio.h>
int areaofRect(int length, int breath){
    int area;
    area = length*breath;
    return area;
}
int main(){
    int l = 10, b = 5;
    int area = areaofRect(l,b);
    printf("%d\n",area);
}