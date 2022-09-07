#include<stdio.h>
int main()
{
     int cp,sp,percentage;
     printf("Enter the celling and cost prize:");
     scanf("%d%d",&cp,&sp);
     if(sp>cp)
     {
         percentage=(sp-cp)*100/cp;
         printf("Profit percentage:%d",percentage);
     }
     else if(cp>sp){
             percentage=(cp-sp)*100/cp;
        printf("Loss percentage:%d",percentage);
     }
     else
        {
            printf("No profit and no loss");
        }
     return 0;
}
