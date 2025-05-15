#include <bits/stdc++.h>
using namespace std;

int main() {
    char sellers_name[100];
    double sellers_fixed_salary, total_sales;

    scanf("%s", sellers_name);
    scanf("%lf %lf", &sellers_fixed_salary, &total_sales);

    double sellers_total_salary = sellers_fixed_salary + (0.15 * total_sales);

    printf("TOTAL = R$ %.2lf\n", sellers_total_salary);
    return 0;
}
