#include <stdio.h>


int main() {
    int n;
    
    printf("Insert a number \n");
    scanf("%d",&n);
    
    printf("sum : %d\n",sumr(n));
    
}
int sumr(int n)
{
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum=sum+i;
    }
    return sum;
}
