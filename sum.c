#include<stdio.h>
int sum_of_dig(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10 + sum_of_dig(n/10));
    }
}
void main(){
    int n=1234;
    int result= sum_of_dig(n);
    printf("Sum of digits of %d is %d",n,result);
}
