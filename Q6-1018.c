#include<stdio.h>

int main(void){
    double n;
    double total;
    scanf("%lf",&n);
    if (n>0)
    {
        for (double i = 1; i <= n ; i++)
        {
            total = 0;
            total += 1/((2*i-1)*2*i);
        }
        printf("%.16lf", total);
    }
    

}
