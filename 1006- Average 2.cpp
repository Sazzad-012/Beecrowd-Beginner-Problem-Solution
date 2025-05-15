#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double Avg = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5);

    printf("MEDIA = %.1lf\n", Avg);
    return 0;
}

