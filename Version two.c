#include<stdio.h>
int main(void)
{
int entry_no;
int day,month,year;
int previous_odometre;
int current_odometre;
int distance;
double litres,price,cost;
char station[50];

printf("ENTER ENTRY NUMBER:");
scanf("%d",&entry_no);
printf("ENTER YOUR DATE(dd/mm/yy):");
scanf("%d/%d/%d",&day,&month,&year);
printf("ENTER PREVIOUS ODOMETRE(km):");
scanf("%d",&previous_odometre);
printf("ENTER CURRENT ODOMETRE(km):");
scanf("%d",&current_odometre);
printf("ENTER LITRES:");
scanf("%lf",&litres);
printf("ENTER PRICE PER LITRE:");
scanf("%lf",&price);
printf("ENTER STATION:");
scanf("%s",station);

distance=current_odometre-previous_odometre;
cost=price*litres;
printf("\n");

printf("------------------------------------------\n");
printf("                RECORD            \n");
printf("------------------------------------------\n");
printf("\n");
printf("ENTRY NO            : %d\n",entry_no );
printf("DATE                :%d/%d/%d\n",day,month,year);
printf("PREVIOUS ODOMETRE   :%d km\n",previous_odometre);
printf("CURRENT ODOMETRE    :%d km\n",current_odometre);
printf("TRAVEL              :%d\n",distance);
printf("LITRES              :%.2f\n", litres);
printf("PRICE PER LITRE     :%.2f\n",price);
printf("COST                :%.2f\n",cost);
printf("STATION             :%s\n",station);

return 0;
}




     