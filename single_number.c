/*
LeetCode: Single Number
*/
#include <stdio.h>
int num[]={1,1,2,2,3,3,4,5,5};
int len = *(&num + 1) - num;
int single=0,i;
int main(void) {
    
    for(i=0;i<len;i++){
        
    single=single^num[i];    
        
    }
	
    printf("%d",single);
	
	return 0;
}

/*
Thus, given this code:
int len = *(&arr + 1) - arr;
Which is effectively the same as this:
int len = &arr[5] - &arr[0];
Which is effectively the same as this:
int len = (<address of arr[5]> - <address of arr[0]>) / sizeof(int);
Thus, the result is 5.
*/
