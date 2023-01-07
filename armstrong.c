#include<stdio.h>
#include<conio.h>
int main()
{
    int num, temp, r, sum = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    temp = num;

    while (temp> 0) 
    {
        
        r= temp % 10;
        sum = (r *r *r)+sum;
        temp =temp/ 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
    getch();
}
