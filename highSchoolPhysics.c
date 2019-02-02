//10071


#include<stdio.h>


int main(){

    int velocity,time,distance;

    while(scanf("%d%d",&velocity,&time)==2){

            distance=velocity*time* 2;

            printf("%d\n",distance);
    }


    return 0;
}
