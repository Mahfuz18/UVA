#include<stdio.h>

int main(){

   unsigned int test,i;

   scanf("%u",&test);

   for(i=0;i<test;i++){

        unsigned int n,num,rem,result,reverse,ck;

        scanf("%u",&n);
        ck=1;

      do{


        result=0;
        num=n;
        while(num>0){
            rem=num%10;
            result=rem+(result*10);
            num=num/10;

        }

        n=n+result;

        reverse=n;

        result=0;

        while(reverse>0){
            rem=reverse%10;

            result=rem+result*10;

            reverse=reverse/10;
        }

        reverse=result;

        if(n==reverse){
          printf("%u %u\n",ck,n);
        }
        ck++;

      }while(n!=reverse);




   }



}
