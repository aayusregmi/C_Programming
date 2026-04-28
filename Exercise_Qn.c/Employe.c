#include <stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char name[50];
    char address[30];
    int age;
    int id;
    int salary;
    char filename[10];
    printf("Enter the file name:");
    scanf("%s", filename);
    getchar();
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("The file cannot be created!!");
        return 1;
    }
    printf("<----Enter the Employee details---->\n");
    printf("Enter the name:");
    
    fgets(name, sizeof(name), stdin);
    name[strcspn(name , "\n")] = '\0';
    printf("Enter the address:");
    fgets(address, sizeof(address), stdin);
    address[strcspn(address , "\n")] = '\0';
    printf("Enter the age:");
    scanf("%d", &age);
    printf("Enter the id:");
    scanf("%d", &id);
    printf("Enter the salary:");
    scanf("%d", &salary);
    getchar();
    printf("Employee details have been updated in file\n");
    fprintf(fp, "\tName\t\t address\t age\t id\t\t salary\n");
    fprintf(fp, "%s\t\t", name);
    fprintf(fp, "%s\t\t", address);
    fprintf(fp, "%d\t", age);
    fprintf(fp, "%d\t\t", id);
    fprintf(fp, "%d\t", salary);

    return 0;
}