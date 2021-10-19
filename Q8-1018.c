#include<stdio.h>
int main(){
    int n, i = 0, total = 0;
    scanf("%d", &n);
    int m = n;
    while (m != 0)
    {
        m = m/10;
        i++;
        
    }
    
    int arr[i];   
    int j = 0;
    while (j < i)
    {
        arr[j] = n % 10;
        n= n/10;
        total = total + arr[j];  
        j++;
    }  
    printf("%d\n%d\n", i, total);
    
}