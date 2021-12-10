#include<stdio.h>
#include<string.h>
int leap_or_not(int year){
    if (year%4==0)
    {
      printf("Leap Year");
    }
    else{
      printf("Not a Leap  year");
    }
}
int main(){
  int year;
  scanf("%d", &year);
  leap_or_not(year);
}