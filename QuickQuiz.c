//Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().
#include <stdio.h>
#include<stdlib.h>

int main(){
    int n = 5;
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d]:" , i);
       scanf("%f" , &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d]:%f\n" , i , ptr[i]);
    }
    
    return 0;
}