/*buy and sell*/
/*keep only one stock*/
#include <stdio.h>

int num[]={7,1,5,3,6,4,};
int len = *(&num + 1) - num;
int i=0,keep,sell=0,profit=0;

int main(void) {
    keep=num[0];
    for(i=1;i<len;i++){
        if(keep>num[i]){
            keep=num[i];
        }
        else{
            sell=num[i];
            for(i;i<len;i++){
                if(sell<num[i]){
                    sell=num[i];    
                }
                else{
                    profit+=sell-keep;
                    sell=0;
                    keep=num[i];
                    break;
                }
            }
        }
    }
    printf("%d",profit);
	return 0;
}

