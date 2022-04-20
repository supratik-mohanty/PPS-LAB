#include <stdio.h>
int main()
{
    int billamt,amtgiven;
    scanf("%d \n %d",&billamt,&amtgiven);
    printf("Quotient:");
    printf("%d\n",billamt/amtgiven);
    printf("Remainder:");
    printf("%d",billamt%amtgiven);
    return 0;
}