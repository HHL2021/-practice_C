/*
LeetCode: Number of Islands
*/
/*
An island is surrounded by 0 and is formed by connecting adjacent lands horizontally or vertically
*/
#include <stdio.h>

int fgrid[4][4] ={{1,1,0,1},{1,0,1,0},{0,1,0,1},{1,1,1,0}};
int gridmap[4][4];
int i,j,count=0;
int cround=0;

int main(void) {
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            if(fgrid[i][j]==1 && gridmap[i][j] ==0 ){
                count++;
                RC(i,j,count);
            }
        }    
    }
    
    printf("%d\n",count);
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
	        printf("%d\t",gridmap[i][j]);
        }
        printf("\n");
    }
	return 0;
}


void RC(int row, int col, int count){
    cround++;
    printf("%d call, check %d %d\n",cround,row,col);
    if(fgrid[row][col]==1 && gridmap[row][col]==0){
        gridmap[row][col]=count;
        if(row==0){
            RC(row+1,col,count);
        }else if(row==3){
            RC(row-1,col,count);
        }else{
            RC(row+1,col,count);
            RC(row-1,col,count);
        }
        if(col==0){
            RC(row,col+1,count);
        }else if(col==3){
            RC(row,col-1,count);
        }else{
            RC(row,col+1,count);
            RC(row,col-1,count);
        }
    }
}
