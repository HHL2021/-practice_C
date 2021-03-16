#include <stdio.h>

int num[]={3,2,0,1,4};
/*int num[]={3,2,1,0,4};*/
int len = *(&num + 1) - num;
int output=0;
int start=0;

int main(void) {
	jump(start);
	if(output){
	    printf("arrived at last index\n");
	}else{
	    printf("can't reach the last index\n");
	}
	return 0;
}


void jump(int step){
    int i;
    if(num[step]==0){
        printf("End at %d index\n",step);
    }
    for(i=1;i<=num[step];i++){
        printf("From index %d, can reach index %d\n",step,step+i);
        if(step+i>=len-1){
            output=1;
            break;
        }else{
        jump(step+i);
        }
    }
}