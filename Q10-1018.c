#include<stdio.h>  

int main()  
{  
    int a[8],n,i;
    scanf("%d",&n);  
    for(i=0;i<=8;i++)  
    {  
        a[i]=n%2;  
        n=n/2;  
    }  
    
    for(i=i-1;i>=0;i--)  
    {  
        printf("%d",a[i]);  
    }  
}
