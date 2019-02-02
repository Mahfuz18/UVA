//11559

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int people,hotel,week;
    long int budget,minimum;

   while( scanf("%d %ld %d %d",&people,&budget,&hotel,&week)==4)

   {

    long int price[hotel],cost;
    int beds[week];
    cost=budget+5;

    for(int i=0;i<hotel;i++)
    {

        scanf("%ld",&price[i]);

        for(int j=0;j<week;j++)
            scanf("%d",&beds[j]);

        for(int j=0;j<week;j++)
        {
            if(beds[j]>=people)
            {
                cost=min(people*price[i],cost);

                break;
            }
        }

    }

        if(cost<=budget)
            printf("%ld\n",cost);
        else
            printf("stay home\n");



   }
   return 0;

}
