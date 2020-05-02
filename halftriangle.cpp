#include<stdio.h>
int main(){
    int i,j,k,num;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=num-i;j>1;j--){
            printf("*");
        }
        for(k=0;k<i;k++){
            printf("o");
        }
        printf("\n");
    }
}