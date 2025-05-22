#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, s;
    scanf("%d %d %d", &a, &b, &s);

    int MaiorAB = (a+b+abs(a-b))/2; //We first find the maximum of a and b using this trick and store it in MaiorAB.
    int maior = (MaiorAB + s + abs(MaiorAB - s)) / 2; //Then we compare MaiorAB with s in the same way to get the maximum of all three values.

    printf("%d eh o maior\n", maior);
    return 0;
}

