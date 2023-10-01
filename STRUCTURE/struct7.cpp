#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[100];
}emp;
void show(emp emp1)
{
    printf("the code of employe is :%d\n",emp1.code);
    printf("the code of employe is :%f\n",emp1.salary);
    printf("the code of employe is :%s\n",emp1.name);
}

int main(){
    emp e1;
    emp *ptr;
    ptr=&e1;
    //(*ptr).code=101;
    ptr->code=101;
    ptr->salary=101.2525;
    strcpy(ptr->name, "ansh");
    show(e1);
    return 0;
}