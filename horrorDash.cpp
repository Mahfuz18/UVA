//11799

#include<iostream>
#include<stdio.h>

int main()
{
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
     int n;
     scanf("%d",&n);
     long int a[n];
     for(int j=0;j<n;j++)
     {
         scanf("%ld",&a[j]);
     }

     long int maximum=a[0];

     for(int j=0;j<n;j++)
     {
         if(maximum<a[j])
         {
             maximum=a[j];
         }
     }

     printf("Case %d: %ld\n",i,maximum);
  }
}
