#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double area_of_rectangled_triangle = (0.5 * A * C);
    double area_of_circle = (3.14159 * C * C);
    double area_of_trapezium = ((A + B) / 2) * C;
    double area_of_square = (B * B);
    double area_of_rectangle = (A * B);

    printf("TRIANGULO: %.3lf\n", area_of_rectangled_triangle);
    printf("CIRCULO: %.3lf\n", area_of_circle);
    printf("TRAPEZIO: %.3lf\n", area_of_trapezium);
    printf("QUADRADO: %.3lf\n", area_of_square);
    printf("RETANGULO: %.3lf\n", area_of_rectangle);

    return 0;
}



