#include<stdio.h>
#include<conio.h>
int main()
{
    int g,s,gg,gs,goldv,silverv;
    printf("Enter how many coins per gram of gold: ");
    scanf("%d",&g);
    printf("Enter how many coins per gram of silver: ");
    scanf("%d",&s);
    printf("Enter how many grams of gold: ");
    scanf("%d",&gg);
    printf("Enter how many grams of silver: ");
    scanf("%d",&gs);

    goldv=g*gg;
    silverv=s*gs;
    if(goldv>=silverv)
    {
        printf("gold !");
    }
    else
    {
        printf("silver !");
    }
    return 0;
}
