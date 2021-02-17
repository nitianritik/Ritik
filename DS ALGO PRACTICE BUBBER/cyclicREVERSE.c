#include <stdio.h>
#include<conio.h>

int main()

{
   int temp;   
  int a[]={1,7,5,7,5,6,8,9,6,54,56,7};
  int size=sizeof(a)/sizeof(a[0]);
  //size=size-1;

for(int i=0;i<size;i++)
  {
  printf(" %d ",a[i]);

  }

  for(int i=0;i<size;i++)
  {
   if(i==0)
   {
     temp=a[i];
   }
    a[i]=a[i+1];
    
    if(i==size-1)
   {
       temp=a[i];
   }


  }


printf("\n");
for(int i=0;i<size;i++)
  {
  printf(" %d ",a[i]);

  }



    return 0;
}