#include<iostream>
using namespace std;
int main()
{
    double radius;
    scanf("%lf", &radius);

    double area = (3.14159*radius*radius);

    printf("A=%.4lf\n", area);
    return 0;
}

