// clock hand . problem no: 579

#include <stdio.h>
#include <math.h>

int main(){

   float hour ,min;
   char ch;

   while(scanf("%f%c%f",&hour,&ch,&min)==3) {

       if(hour==0.0 && min==0.0)
       return 0;


       float hour_result,min_result,result;

       hour_result=0.5*(60*hour+min);
       min_result= 6*min;


            result= hour_result-min_result;

        if(result>180){
            result=360-result;
        }

       if(result<0)
       {
           result=fabs(result);
           result=360-result;
           if(result>180){
            result=360-result;
           }
       }


       printf("%.3f\n",result);




   }

  return 0;
}

