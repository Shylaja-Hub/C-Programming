#include<stdio.h>
struct employee
{
    char name[40];
    long long int num;
    float salary;

};
int main()
{
    struct employee e[5];
     int i=0;
     printf("enter the employee's information :\n");
     for(i=0;i<5;i++){
        printf("enter employee name :");
        scanf("%s",e[i].name);
        printf("enter employee mobile number: ");
        scanf("%lld",&e[i].num);
        printf("enter employee salary :");
        scanf("%f",&e[i].salary);
        printf("\n");
     }
     printf("\ndisplaying information\n");
     for(int i=0;i<5;i++){
     printf("EMPLOYEE NAME : %s\n",e[i].name);
     printf("EMPLOYEE MOBILE NUMBER : %lld\n",e[i].num);
     printf("SALARY: %f\n",e[i].salary);
     printf("\n");
     }
     return 0;

}
