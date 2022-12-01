// You have given positive integer N, the size of an array as input. Take an array of size N as input. You have to find the
// sum of those element in array which last digit is zero. Implement this by using function.
// Note - It is guaranteed that each element of an array is at least 2 digit number.


#include<stdio.h>

int myFunc(int N){
    int arr[10000],sum=0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%10==0){
           sum+=arr[i];
        }
    }
    return sum;
  
}
int main(){
    int N;
    scanf("%d",&N);
    printf("%d",myFunc(N));
    return 0;
}