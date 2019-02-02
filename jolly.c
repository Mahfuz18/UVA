//10038


#include<stdio.h>
int main(){

  int n;

  while(scanf("%d",&n)==1){

        int i,j,ck,flag,array[n],result[n-1];

        ck=0;
        flag=0;

        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }

        for(j=0;j<n-1;j++){
            result[j]=array[j]-array[j+1];

            if(result[j]<0){
                result[j]=result[j]*(-1);
            }
        }

        for (i=1;i<=n-1;i++){

                for(j=0;j<n-1;j++){
                    if(i==result[j]){
                        ck=1;
                        break;
                    }
                }
                if(ck!=1){

                    flag=1;
                    break;
                }

                ck=0;

        }

        if(flag==1){
            printf("Not jolly\n");

        }

        else if(flag==0){
            printf("Jolly\n");
        }






  }


}
