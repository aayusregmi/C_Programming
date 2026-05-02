#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter n upto which you want to allocate for array:\n");
    scanf("%d" , &n);
    int* ptr;
    ptr = (int*) calloc(n , sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    printf("The value is %d" , ptr[0]);
    
    
    return 0;
}