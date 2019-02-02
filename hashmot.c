// 10055 comment not allowed in UVA
#include<stdio.h>
#include<math.h>

int main(){

    long int input1,input2,result;

    while(scanf("%ld%ld",&input1,&input2)==2/* !=EOF also correct*/){

        result=input1-input2;

        if(result<0)
            result=(-1)*result;
        printf("%ld\n",result);
    }
    return 0;
}
