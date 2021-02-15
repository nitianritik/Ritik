#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()

{
    
    int a[]={1,2,3,4,5,6,7}; // lenghth = 9
    int s=sizeof(a)/sizeof(int);  // LENGHTH 
  // printf("%d",s); sf=9 | s=8 | s/2=4 | 0-8=9 elements | 0-8
 
 int temp;

 for(int i=0;i<s/2;i++)
 {


    printf("\n%d <-> %d ",i , s-1-i);

temp=a[i];
a[i]=a[s-1-i];
a[s-1-i]=temp;


 }

for(int i=0;i<s;i++)
{
    printf("\n%d",a[i]);
}


    getch();
}