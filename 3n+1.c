

#include<stdio.h>

int main(){

   int input1,input2,ck,count,reserve,n,save;


   while(scanf("%d %d",&input1,&input2)==2){
           int safty1,safty2;
           safty1=input1;
           safty2=input2;

           if(safty1==1&& safty2==1){


                    printf("%d %d %d\n",safty1,safty2,1);

           }

        else{
            if(input1>input2){
            int temp;
            temp=input1;
            input1=input2;
            input2=temp;
        }

        n=save=input1;
        count=0;
        reserve=0;


        while(input1<=input2){

           do{
               if(n==1){
                count++;
               }

               else{
                    int mod;
                    mod=n%2;

                    if(mod==0)
                    {
                        n=n/2;
                        count++;
                    }

                    else{
                        n=n*3+1;
                        count++;
                    }



               }

           }while(n!=1);

          if(reserve<count)
          {
              reserve=count;
          }

          count=0;

          input1++;
          n=input1;

    }

    if(safty1>safty2)
    {
       printf("%d %d %d\n",safty1,safty2,reserve+1);
    }
    else
       printf("%d %d %d\n",save,input2,reserve+1);
        }
   }


 return 0;
}
