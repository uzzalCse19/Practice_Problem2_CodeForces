#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,max=-1000000;
    scanf("%d",&n);
    for(int i=1;i<=12;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
  //  printf("%d\n",max);
   return 0;
}