#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int  mm(int *a,int l);
// goal to find the maximul and minimul in the array
int mm(int *a,int l)
{

int *ptr;
   // printf(" we are within the function");
int i=0;
int min,max;

while(i<l)
{
   if(i==0)
     {
       max=*a;
       a++;
       i++;
     }
     else
     {
        if(max<*a)
        {
          max=*a;
          a++;
          i++;
        }
        else
        {
           a++;
           i++;
        }
         

     }
}

printf("\n The max no is =  %d ",max);
i=0;
a=ptr;
while(i<l)
{
   if(i==0)
     {
       min=*a;
       a++;
       i++;
     }
     else
     {
        if(min>*a)
        {
          min=*a;
          a++;
          i++;
        }
        else
        {
           a++;
           i++;
        }
         

     }
}

printf("\n The min no is =  %d ",min);


}


void main()
{
    
    int a[]={1,2,3,8,5,6,7}; // lenghth = 9
    int lenghth = sizeof(a)/sizeof(int);
  //  printf("%d",lenghth);
    int i=mm(a,lenghth);
 

       


    getch();
}