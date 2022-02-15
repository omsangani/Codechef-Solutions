#include<stdio.h>
int power_of_num(int a,int b)
{
    int power=1;
    while(b--)
    {
        power=power*a;
    }
    printf("%d",power);
}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Hello World");
    power_of_num(a,b);
}
