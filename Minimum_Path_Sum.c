/*
LeetCode: Minimum Path Sum
*/
#include <stdio.h>
int grid[3][3]={{1,3,1},{1,5,1},{4,2,1}};
int i,j;

int main(void) {
    for(i=1;i<=2;i++){
        grid[0][i]+=grid[0][i-1];
        grid[i][0]+=grid[i-1][0];        
    }
    
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            if(grid[i-1][j]>grid[i][j-1]){
                grid[i][j]+=grid[i][j-1];
            }else{
                grid[i][j]+=grid[i-1][j];   
            }
        }
    }
    printf("%d",grid[2][2]);
	return 0;
}

