//11727
#include<iostream>
#include<stdio.h>

int main()
{
    int t;

    scanf("%d",&t);

    for (int i=1;i<=t;i++)
    {
        long int x,y,z;
        scanf("%ld %ld %ld",&x,&y,&z);

        if(x<y && x<z)
        {
            if(y<z)
                printf("Case %d: %ld\n",i,y);
            else
                printf("Case %d: %ld\n",i,z);
        }

        else if(y<x&& y<z)
        {
            if(x<z)
                printf("Case %d: %ld\n",i,x);
            else
                printf("Case %d: %ld\n",i,z);
        }

        else if(z<x&& z<y)
        {
            if(x<y)
                printf("Case %d: %ld\n",i,x);
            else
                printf("Case %d: %ld\n",i,y);
        }
    }
    return 0;
}
