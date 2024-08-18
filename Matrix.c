#include<stdio.h>
int main(){
    int ch[50][50],r,c;
    printf("row and column :");
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter element a%d%d:",i,j);
            scanf("%d",&ch[i][j]);
        }
    }
    printf("\nyour matrix is\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",ch[i][j]);
        }
        printf("\n");
    }
}
