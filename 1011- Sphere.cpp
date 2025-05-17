#include<bits/stdc++.h>
int main()
{
    double radius;
    scanf("%lf", &radius);

    double volume_of_sphere = (4/3.0) * 3.14159 * radius * radius * radius;

    printf("VOLUME = %.3lf\n", volume_of_sphere);
    return 0;
}

