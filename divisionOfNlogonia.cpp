//111498

#include<iostream>
#include<stdio.h>

int main()
{
    long int k;

    while(scanf("%ld",&k)&&k!=0)
    {
        long int n,m,x,y;
        scanf("%ld %ld",&n,&m);

        for(long int i=0;i<k;i++)
        {
            scanf("%ld %ld",&x,&y);

            if(n<x&&m<y)
                printf("NE\n");

            else if(n>x&&m<y)
                printf("NO\n");

            else if(n<x&&m>y)
                    printf("SE\n");
            else if(n>x&&m>y)
                printf("SO\n");
            else if(n==x || m==y)
                printf("divisa\n");
        }

    }
    return 0;
}
