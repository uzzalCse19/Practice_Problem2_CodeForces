#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(i%2==0){
        printf("%d\n",i);
        a=1;
        }
    }
    if(a==0) printf("-1\n");
    return 0;
}