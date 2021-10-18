#include<stdio.h>

int main(void){
    double n;
    double total=0;
    scanf("%lf",&n);
    if (n>0)
    {
        for (double i = 1; i <= n ; i++)
        {
            total += 1/((2*i-1)*2*i);
        }
        printf("%.16lf", total);
    }
    

}
