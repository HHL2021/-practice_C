/* move zeros */
#include <stdio.h>

int num[]={0,7,3,0,4,0,0,5};
int i,j=0;
int len = *(&num + 1) - num;

int main(void) {
	for(i=0;i<len;i++){
	    if(num[i]!=0){
	        num[j++]=num[i];
	    }
	}
    for(j;j<len;j++){
        num[j]=0;
    }	
	for(i=0;i<len;i++){
	    printf("%d\t",num[i]);
	}    
	return 0;
}

