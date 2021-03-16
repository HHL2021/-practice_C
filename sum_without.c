/* sum of two numbers without +- */
#include <stdio.h>
int num1 = -7, num2= -100, carry=0, keep=0;
int check=1;

int main(){
    while(check){
        carry= num1&num2;
        keep= num1^num2;
        carry*=2;
        check=carry&keep;

        if(check==0){
            printf("%d",carry|keep);    
        }
        else{
            num1=carry;
            num2=keep;
        }    
    }    
    return 0;
}
