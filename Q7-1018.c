#include <stdio.h>
#include <math.h>
 
int main()
{
    int n;
    int i = 2;
    printf("n = ");
    scanf("%d", &n);
    if(n < 2)
    {
        printf("\ns%s","NO");
        return 0;
    }
    int count = 0;
    while(i <= sqrt(n))
    {
        if(n % i == 0)
        {
            count++;
        }
        i++;
    }
    if(count == 0){
        printf("\n%s", "YES");
    }else{
        printf("\n%s", "NO");
    }
}