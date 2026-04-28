#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("aayu.txt","r");
    int num;
    if(fp == NULL)
    {
        printf("File doesnot exist!!!");
        return 1;
    }
    else
    {
    fscanf(fp , "%d" , &num);
    }

    return 0;
}