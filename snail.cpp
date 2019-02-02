//573
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float h,u,d,f;

    while(scanf("%f%f%f%f",&h,&u,&d,&f)&&h!=0)
    {
        float success,fatigue;
        success=0.0;
        fatigue=(f/100)*u;
        int ck=0;

        while(success>=0 && success<h)
        {

           if(u>=0)
           success=success+u;

            if(success<=h)
            {
                success=success-d;
            }
            u=u-fatigue;
            ck++;
        }

        if(success>h)
        {

            printf("success on day %d\n",ck);
        }

        else
            printf("failure on day %d\n",ck);

    }

    return 0;
}
