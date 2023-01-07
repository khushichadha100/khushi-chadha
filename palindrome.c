#include<stdio.h>
#include<conio.h>
int main()
{
    int n,palin=0,curn,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    curn=n;            
    while(curn>0)
    {                  
        a=curn%10;                
        palin=palin*10+a;
        curn=curn/10;
    }
    if(palin==n)
    {        
        printf("%d is a palindrome",n);
    }
    else
    {
        printf("%d is not a palindrome",n);
    } 
    return 0;
    getch();
}
