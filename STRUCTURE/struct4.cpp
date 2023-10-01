#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[100];
};
int main()
{
struct employee ansh ={100, 34.23, "ansh"};
printf("code is  :%d \n",ansh.code);
printf("salary is  :%f \n",ansh.salary);
printf("name is : %s \n",ansh.name);
return 0;
}   