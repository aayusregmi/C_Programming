#include <stdio.h>

int main(){
    FILE *p;
    p = fopen("aayus.txt" , "r");
    int num;
    if (p == NULL)
    {
        printf("The file doesnot exist!!");
    }else{
    fscanf(p , "%d" , &num);
    printf("The value of num us %d\n" , num);

    fscanf(p , "%d" , &num);
    printf("The value of num us %d\n" , num);

    fscanf(p , "%d" , &num);
    printf("The value of num us %d\n" , num);

    fclose(p);
    }
    
    return 0;
}