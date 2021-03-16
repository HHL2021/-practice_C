/*Product of Array Except Self*/
#include <stdio.h>
int num[]={2,3,4,5};
int product=1;
int i;
int len = *(&num + 1) - num;

/*
int main(void) {
	for(i=0;i<len;i++){
	    product *=num[i];
	}
    int out_put[len-1];  
	for(i=0;i<len;i++){
	    out_put[i]=product/num[i];
	    printf("%d\t",out_put[i]);
	}
	printf("\n");
	return 0;
}
*/

/*solve it without division and in O(n).*/
/*
int main(void){
    int l_array[len]; 
    int r_array[len];
    int output[len];
    l_array[0]=1;
	for(i=1;i<len;i++){
	    l_array[i]=num[i-1]*l_array[i-1];
	}
	r_array[len-1]=1;
	for(i=len-2;i>=0;i--){
	    r_array[i]=num[i+1]*r_array[i+1];
	}	    
    for(i=0;i<len;i++){
        output[i]=l_array[i]*r_array[i];
        printf("%d\t",output[i]);
    }
	printf("\n");    
    return 0;
}
*/

/*solve it with space complexity O(1).*/

int main(void){
    int rproduct=num[len-1];
    int output[len];
    output[0]=1;
	for(i=1;i<len;i++){
	    output[i]=num[i-1]*output[i-1];
	}
	for(i=len-2;i>=0;i--){
        output[i] *= rproduct;
        rproduct *= num[i];
	}	    
    for(i=0;i<len;i++){
        printf("%d\t",output[i]);
    }
	printf("\n");    
    return 0;
}
