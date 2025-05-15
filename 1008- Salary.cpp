#include<bits/stdc++.h>
using namespace std;
int main()
{
    int employees_number, employees_work_hours;
    float Amount_recieve_per_hour;
    scanf("%d %d", &employees_number, &employees_work_hours);
    scanf("%f", &Amount_recieve_per_hour);

    float Employees_salary = ((employees_work_hours) * (Amount_recieve_per_hour));

    printf("NUMBER = %d\n", employees_number);
    printf("SALARY = U$ %.2f\n", Employees_salary);
    return 0;
}

