#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the value upto which you want to allocate:");
    scanf("%d" , &n);
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 12;
    ptr[1] = 13;
    printf("The value in 8 place is %d" , ptr[1]);
    //suppose now i want to increase the memory allocation of the array ptr now i can use realloc function:
    ptr = (int*) realloc(ptr , 10 * sizeof(int)); //pahila n*sizeof(int) lets say n = 5 , then memory cover = 20 , now memory cover = 40

    return 0;
}