//11172

#include<iostream>

#include<stdio.h>
int main()
{
    int test,a,b,i;
    scanf("%d",&test);

    for(i=0;i<test;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
            printf("=\n");
        else if(a>b)
            printf(">\n");

        else if(a<b)
            printf("<\n");
    }

    return 0;
}
