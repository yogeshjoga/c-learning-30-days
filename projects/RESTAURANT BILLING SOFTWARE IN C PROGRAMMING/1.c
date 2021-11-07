// let's start the new project by using the c programming language
// let's go....................
// very exiting
// youtube link    https://youtu.be/_2msghvRn5M
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<windows.h>
// function to bill header
void billHeader(char name[60], char date[50]){
    printf("\n\n");
    printf("\t    ADV. Restaurant");
    printf("\n\t  ---------------------");    
    printf("\n Date: %s", date);
    printf("\n Invoice To :", name);
    printf("\n");
    printf("-----------------------------------------\n");
    printf("Items \t\t");
    printf("Quantity \t\t");
    printf("\n--------------------------------------------");
    printf("\n\n");
}




void billBody(char item[60], int quantity, float price){
    printf("%s\t\t", item);
    printf("%d\t\t",quantity);
    printf("%.2f\t\t", quantity * price);
    printf("\n");
}


struct items{
    char item[20];
    float price;
    int quantity;
}
struct orders{
    char customer[50];
    char date[50];
    int numOfItems;
    struct items;
}


void billFooter(float total){
    printf("\n");
    float dis = 0.1 * total;
    float netTotal = total - dis;
    float cgst = 0.09 * netTotal, grandtotal = netTotal + 2 * cgst;
    printf("----------------------------------------------------------");
    printf("Sub Total \t\t\t %.2f", total);
    printf("\n Discount @10 %s\t\t\t%.2f","%", dis);
    printf("\n\t\t\t--------------");
    printf("\n Net Total\t\t\t%.2f", netTotal);
    printf("\n CGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n SGST @9%s\t\t\t%.2f","%",cgst);
    printf("----------------------------------------------------------");
    printf("\n Grand Toatal \t\t\t%.2f", grandtotal);
    printf("----------------------------------------------------------");
}


int main(){
    int opt;
   printf("\t=========================ADV. RESTAURANT=========================");
   printf("\n1.Genarate Invoice");
   printf("\n2.Show all Invoice");
   printf("\n3.Search Invoice");
   printf("\n4.Exit");
   printf("\n\n Please Select Your Order : ");
   scanf("%d",&opt);

    switch(opt){
        case 1:
        printf("\nPlease Enter The Customer Name");
        fgets(ord.customer,50,stdin);
        ord.customer[strlen(ord.customer)-1] =0;
        strcpy(ord.date,_DATE_);
        printf("\nPlease enter the number of items :\n");
        scanf("%d",&n);
        for(int i=0; i<z;i++){
            fgetc("\n\n");
            printf("Please enter the item %d", i+1);
            fgets(ord.itm[i].item,20,stdin);
            ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
            scanf("%d",&ord.itm[i].quantity);
            printf("\n Please enter the unit of Price : \t");
            scanf("%f", &ord.itm[i].price);

        }
    }

   //printf("\nYou have choosen %d", opt);
   printf("\n\n");
return 0;
}

