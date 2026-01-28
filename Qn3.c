// 3.	WAP to Display n natural numbers entered by the user.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the any positive number:");
    scanf("%d",&n);
    printf("The natural number:");
    for(i=1 ; i<=n; i++){
        printf("%d \n",i);
    }
    return 0;
}
