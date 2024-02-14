#include <stdio.h>
int main(){
 
 float length, width;
 
 printf("enter length of the rectangle :");
 scanf("%f", &length);
 
 printf("enter width of the rectangle :");
 scanf("%f", &width);
 
  float area = length * width;
 printf("area of the rectangle is %f",area);
 return 0;
}
