#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int a;
        scanf("%d",&a);
        while(1){
        printf("%d ",a%10);
        a=a/10;
        if(a==0 || a<0){
        printf("\n");
        break;
        }
        }
    }
   return 0;
}