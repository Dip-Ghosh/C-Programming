#include<stdio.h>
#include<math.h>
int main()
{

     int i=1,n,sum=0,sum1=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {  sum=0,sum1=0;
         for(int j=1;j<=i;j++)
         {
             sum=sum+j;
         }
         sum1=sum1+sum;
     }
     printf("%d",sum1);
     return 0;
}

