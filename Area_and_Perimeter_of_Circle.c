#include<stdio.h>
int main()
{
    int r;
    float area,perimeter;
    scanf("%d",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("%.2f
",area);
    printf("%.2f",perimeter);
}