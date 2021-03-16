/* 
LeetCode: Happy Number
*/
/* sum of sqaure of digit*/
#include <stdio.h>
int n=989;
int sum=0,i=0,j=0;
int check=1;
int loop[30];
int main(void) {
    while(check==1){
        sum=0;
        while(n>0){
            sum += (n%10)*(n%10);
            n=n/10;
        }
        switch(sum){
        case 0:
            printf("not happy");
            check=0;
        case 1:
            printf("happy");
            check=0;
        default:
            for(i=0;i<j;i++){
                if(loop[i]==sum){
                    check=0;
                    printf("loop number %d",j);
                }
            }
            loop[j]=sum;
            j++;
            n=sum;
        }
        
    }    
	return 0;
}

