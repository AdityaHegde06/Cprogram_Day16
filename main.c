/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("Address of i = %ls\n",&i);
    printf("Address of i = %ls\n",j);
    printf("Address of i=%u\n",*k)';
     printf("Address of j = %u\n",&j);
    printf("Address of j = %u\n",j);
    printf("Address of k=%u\n",k);
    printf("Value of j=%u\n",j);
    printf("Value of k=%u\n",k);
    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",(&i));
    printf("Value of i =%d\n",*j);
    printf("Value of i=%d\n",**k);
    return 0;
}
