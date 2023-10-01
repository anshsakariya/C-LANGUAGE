#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[100];
};
void show(struct employee emp)
{
    printf("the code of employe is :%d\n",emp.code);
    printf("the code of employe is :%f\n",emp.salary);
    printf("the code of employe is :%s\n",emp.name);
    emp.code=34;
}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    //(*ptr).code=101;
    ptr->code=101;
    ptr->salary=101.2525;
    strcpy(ptr->name, "ansh");
    show(e1);
    printf("the code of employee is :%d\n",e1.code);
    return 0;
}