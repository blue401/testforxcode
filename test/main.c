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
    int i=0;
    while (i<n) {
    	i++;
        sum+=i;
    }
    return sum;
}
