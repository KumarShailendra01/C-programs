#include<stdio.h>
int main(){
    float purchaseamount;
    float totalbill;
  
  scanf("%f",&purchaseamount);
 

  if (purchaseamount > 1000)
  {
     totalbill = purchaseamount- purchaseamount*10 /100;
       printf("the total bill is: %2f",totalbill);
}

else
  {
    totalbill=purchaseamount;
    printf("the total bill is: %2f",purchaseamount);

  }
  return 0;
}