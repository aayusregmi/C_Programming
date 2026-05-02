//free() function is used to free the memory allocation by the malloc , calloc
#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the n upto which you need allocation:\n");
    scanf("%d" , &n);
    int* ptr;
    ptr = (int*) malloc( n * sizeof(int));
    ptr[0] = 12;
    free(ptr);
    printf("The value of ptr[0] is %d" , ptr[0]); //see its give the garbage value (free function clear the memory)

    return 0;
}