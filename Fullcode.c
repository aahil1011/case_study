#include<stdio.h>
void get_userdata();
void display_data();
void display_items();
void get_input();
void gen_bill(double sum);

//int items[100];
int cust_id = 0;
long long int ph;
char name[100];

int credit = 0;

char items[][10] = {"Apple(kg)","Eggs(dz)","Milk(L)","Panner(g)","Bread(pk)","Coke(1L)","Tea(pk)","Curd(ml)","Lays(pk)","Cookie(pk)"};
int price[10] = {100, 60, 30, 100, 50, 40, 10, 30, 10, 20};
int stock[10] = {100,100,100,100,100,100,100,100,100,100}; //this stock changes its value based on user selected qty
int teststock[10] = {100,100,100,100,100,100,100,100,100,100}; //this is the base stock which cant be changed
//char items[][10] = {"Apple(kg)","Eggs(dz)","Milk(L)","Panner(g)","Bread(pk)","Coke(1L)","Tea(pk)","Curd(ml)","Lays(pk)","Cookie(pk)"};

//below can be replaced with an array
/*int apple = 100;
int eggs = 50;
int milk = 30;
int panner = 500;
int bread = 30;
int coke = 80;
int tea = 20;
int curd = 50;
int lays = 30;
int cookie = 30;*/


//get all the data from user
void get_userdata()
{
    printf("\nEnter your name: ");
    //scanf("%s",name);
    scanf("%[^\n]%*c", name); //fixes the name problem
    printf("\nEnter customerID: ");
    scanf("%d",&cust_id);
    printf("\nEnter phone number: ");
    scanf("%lld",&ph);
    printf("-------------------------\n");
    display_data();
}

//display/verification of data
void display_data()
{
    int i = 2;
    printf("\nYour name: %s",name);
    printf("\nYour customerID %d", cust_id);
    printf("\nYour phone number: %lld\n", ph);
    printf("\nConfirm with 1 if the data is correct else press 0\n");
    scanf("%d",&i);

    if(i == 1)
    {
        //next step(data correct)
        display_items();
    }
    else if(i == 0)
    {
        printf("-------Re-enter your data------\n");
        get_userdata();
    }
    else
    {
        //do nothing
    }
}

void display_items()
{
    system("cls");
    printf("\033[0m"); //reset color------------------------------------------------------------------
    //char items[][10] = {"Apple(kg)","Eggs(dz)","Milk(L)","Panner(g)","Bread(pk)","Coke(1L)","Tea(pk)","Curd(ml)","Lays(pk)","Cookie(pk)"};
    //int stock[10] = {100,50,30,500,30,80,20,50,30,30};


    printf("\n********************************\n");
    printf("|ITEMS|   \t|STOCK| |PRICE|\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d %s  \t:%d  \t %d\n",(i+1),items[i],stock[i],price[i]);
    }
    printf("Press 0 to exit\n");
    printf("********************************\n");
    get_input();

}

void get_input()
{
    printf("\x1b[33m"); //yellow font--------------------------------------------------
    int qty = 0;
    int choice = 0;
    int i = 1;
    double sum = 0;
    double indsum = 0;
    while( i == 1)
    {
        printf("\n-------------------------------\n");
        printf("---------Enter-choice----------\n");
        printf("-------------------------------\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the quantity required for Apple: ");
            scanf("%d",&qty);
            if(qty>stock[0]){
                printf("OUT OF STOCK");
                break;
            }

            indsum = price[0]*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[0])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[0] = stock[0] - qty;
          //  printf("-------------------------------\n");
            break;

         case 2:
            printf("Enter the quantity required for Egg: ");
            scanf("%d",&qty);
            if(qty>stock[1]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[1])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[1])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[1] = stock[1] - qty;
          //  printf("-------------------------------\n");
            break;

         case 3:
            printf("Enter the quantity required for Milk: ");
            scanf("%d",&qty);
            if(qty>stock[2]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[2])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[2])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[2] = stock[2] - qty;
       //     printf("-------------------------------\n");
            break;

         case 4:
            printf("Enter the quantity required for Panner: ");
            scanf("%d",&qty);
            if(qty>stock[3]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[3])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[3])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[3] = stock[3] - qty;
        //    printf("-------------------------------\n");
            break;

         case 5:
            printf("Enter the quantity required for Bread: ");
            scanf("%d",&qty);
            if(qty>stock[4]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[4])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[4])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[4] = stock[4] - qty;
        //    printf("-------------------------------\n");
            break;

         case 6:
            printf("Enter the quantity required for Coke: ");
            scanf("%d",&qty);
            if(qty>stock[5]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[5])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[5])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[5] = stock[5] - qty;
        //    printf("-------------------------------\n");
            break;

         case 7:
            printf("Enter the quantity required for Tea: ");
            scanf("%d",&qty);
            if(qty>stock[6]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[6])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[6])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[6] = stock[6] - qty;
        //    printf("-------------------------------\n");
            break;

         case 8:
            printf("Enter the quantity required for Curd: ");
            scanf("%d",&qty);
            if(qty>stock[7]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[7])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[7])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[7] = stock[7] - qty;
        //    printf("-------------------------------\n");
            break;

         case 9:
            printf("Enter the quantity required for Lays: ");
            scanf("%d",&qty);
            if(qty>stock[8]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[8])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[8])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[8] = stock[8] - qty;
       //     printf("-------------------------------\n");
            break;

         case 10:
            printf("Enter the quantity required for Cookie: ");
            scanf("%d",&qty);
            if(qty>stock[9]){
                printf("OUT OF STOCK");
                break;
            }
            indsum = (price[9])*qty;
            printf("Price of item for %d Quantities: %lf\n",qty,indsum);
            sum = sum + (price[9])*qty;
            printf("Total cart Sum: %lf\n",sum);
            stock[9] = stock[9]-qty;
        //    printf("-------------------------------\n");
            break;

         case 0:
            printf("Exiting...\n");
            /*for(int i = 0; i < 10; i++)
            {
                printf("%d \n", stock[i]);
            }*/
          //  bill(sum);
          gen_bill(sum);
            i = 2;
            break;

         default:
            printf("\033[31m"); //red font
            printf("\nPlease Enter correct choice!\n");
            printf("\x1b[33m"); //yellow font
            break;

        }
    }
}


/*void bill(int sum)
{
    //system("cls");
   // printf("\033[0;36m");
    int dis = 0;
    //int tax = sum*0.18;
   // printf("------BILL------\n");
    printf("Total cart amount: %d\n",sum);
    if(sum>=500){
        dis=sum*0.10;
        int tax = (sum-dis)*0.18;
        printf("\nTotal Discount(10%): %d",dis);
        printf("\nTotal tax(18%): %d",tax);
        printf("\nTotal amount after discount: %d",(sum-dis+tax));
    }
    else if( sum < 500)
    {
        int tax = sum*0.18;
        printf("\nTotal Tax: %d",tax);
        printf("\nTotal amount: %d",(sum+tax));
    }

}*/


void gen_bill(double sum)
{
    double dis = 0;
    system("cls");
    printf("\033[0m"); //reset color-------------------------------------
    int j = 1;
    printf("-----------------------------BILL-----------------------------\n");
   // printf("|S.NO|\t|ITEMS|\t\t|QTY|\t|PRICE|\t|NET PRICE|\n");
    for(int i = 0; i < 10; i++)
    {
        if(stock[i] < teststock[i]) //then the item has been taken
        {
            printf("SN: %d\tITEM: %s\tQTY: %d\tPRICE: %d\tNET PRICE: %d\t\n",j++,items[i],(100-stock[i]),price[i],((100-stock[i])*price[i]));   //s.no|name|qty|price|total
        }
    }

    printf("--------------------------------------------------------------");

    printf("\nTotal cart amount: %lf\n",sum);
    //printf("Do you have credits? press 0 for NO and 1 for YES\n");
    if(sum>=500){
        dis=sum*0.10;
        double tax = (sum-dis)*0.18;
        printf("\nDiscount: %lf",dis);
        printf("\nTax %lf",tax);
        printf("\nTotal Amt: %lf\n\n\n\n",(sum-dis+tax));

    //    bool havecredit = false;
     //   printf("")

    }
    else if( sum < 500)
    {
        double tax = sum*0.18;
        printf("\nTax: %lf",tax);
        printf("\nTotal Amt: %lf\n\n\n\n",(sum+tax));
    }

}

int main()
{
    // Escape code for green text
    printf("\033[32m");//----------------------------------------
    get_userdata();
    return 0;
}



//
//1.) bugs: change any int to floats
//2.) feature: add features like product ID codes and maybe award points or redeem points for more discount
//for points. the number of points earned should be equal to the total cost. and to redeem 1 point value is 0.01rs
//so to redeem 1000 points 1000*0.01 = 10rs off