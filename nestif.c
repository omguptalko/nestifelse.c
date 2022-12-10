// Program Greatest 3 number
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c  ;
printf(" enter the value of a,b,c ");
scanf("%d%d%d",&a,&b,&c);
if( a<b)
     {
       if (a>c)
        printf("%d is greatest ",a);
       else
        printf("%d is greatest ", c);
     }

     { 
       if (b>c)
        printf("%d is greatest ",b);
       else
        printf("%d is greatest ", c);
     }  
}