//write a program to swap two variables using the third variable

#include<stdio.h>
#include<conio.h>
void main(){
int a = 10;
int b = 15;
int c;
clrscr();
c=a;
a=b;
b=c;
printf("value of a is %d\n",a);
printf("value of b is %d",b);
getch();
}