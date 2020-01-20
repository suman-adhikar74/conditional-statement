#include <stdio.h>
#include <string.h>

int main()
{
   int id, consumed;
   double chg, surchg=0, gramt,Total;
   char name[25];

   printf("Enter Customer ID :");
   scanf("%d",&id);

   printf("Enter the name of the customer :");
   scanf("%s",name);

   printf("Enter the unit consumed by the customer :");
   scanf("%d",&consumed);

   if (consumed <200 )
    chg = 1.20;
   else	if (consumed>=200 && consumed<400)
        chg = 1.50;
    else if (consumed>=400 && consumed<600)
            chg = 1.80;
        else
            chg = 2.00;

   gramt = consumed*chg;
   if (gramt>300)
    surchg = gramt*15/100.0;
   Total = gramt+surchg;
   if (Total  < 100)
    Total =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO :%d\n",id);
   printf("Customer Name                       :%s\n",name);
   printf("unit Consumed                       :%d\n",consumed);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
   printf("Surchage Amount                     :%8.2f\n",surchg);
   printf("Net Amount Paid By the Customer     :%8.2f\n",Total);

}
