#include <stdio.h>
struct Employee
        {
    int empno,age;
    char empname[50];
    char address[50];
        };

int main() {
struct Employee e1;
printf("Enter the name, employee number, address, age: ");

scanf("%s\n %d\n %s\n %d\n",&e1.empname,&e1.empno,&e1.address,&e1.age );
printf("Employee name =%s\n Employee number=%d\n  Employee address = %s\n Employee age = %d\n ",e1.empname,e1.empno,e1.address,e1.age);


return 0;
}
