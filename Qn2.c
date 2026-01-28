// 2.Compute the sum of the first 10 natural numbers.
#include<stdio.h>
int main(){
    int add=0;
    int i;
    for(i=1; i<=10; i++){
        add=add+i;
       }
       printf("%d\n", add);
//writing this syntax outside the loop will only give the last result.
       return 0;
}