//10783


#include<stdio.h>

int main(){

    int test,i,result;

    scanf("%d",&test);

    for(i=1;i<=test;i++){

        int a,b;
        result=0;

        scanf("%d",&a);
        scanf("%d",&b);

        int j;

        for(j=a;j<=b;j++){

               if((j%2)!=0){
                    result= result+j;
               }

        }
        printf("Case %d: %d\n",i,result);


    }

    return 0;
}
