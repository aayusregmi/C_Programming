#include <stdio.h>
#include<stdlib.h>

int main(){
    //suppose i want to allocate the array in memory as user wants
    //and if i did this:
    int n;
    printf("Enter the value upto which you want to allocate:");
    scanf("%d" , &n);
    //int arr[n]; //this can give me the overflow 
    //so the safest way to allocate memory as wants is to use malloc
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 12;
    ptr[1] = 13;
    printf("The value in 8 place is %d" , ptr[7]);

    return 0;
}