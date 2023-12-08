#include <stdio.h>

int main()
{
    int salary;
    float hra,da,ta,grosssalary ;
    printf("\nenter your salary");
    scanf("%d", &salary);
    hra = salary * 10 / 100;
    da = salary * 5 / 100;
    ta = salary * 8 / 100;
    grosssalary = salary + hra + da + ta;

    printf("%f", grosssalary);

    return 0;
}