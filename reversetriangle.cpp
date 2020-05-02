#include<stdio.h>
int main(){
    int i,j,num;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=num-i;j>0;j--){
            printf("0");
        }
        printf("\n");
    }
}