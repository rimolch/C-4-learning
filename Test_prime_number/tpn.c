#include<stdio.h>
int is_prime_number(int n){
    int i;
    if(n<2){
        return 0;//boolean false
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;//boolean false
        }
    }
    return 1;//boolean true
}
int main(){
    int n;
    while(1)//it will execute till the break statement & it means boolean true.
    {
        printf("Please enter a number: ");
        scanf("%d",&n);
       if(1==is_prime_number(n)){
       printf("%d is a prime number.\n",n);   
        }
        else{
            printf("%d is not a prime number\n",n);
        }
      if(n==0){
            break;
        }
    }
    return 0;//return 0 & return 1 both are same in main function.
}
