#include<stdio.h>
int main(){
    int i,j,k,l,num;
    scanf("%d",&num);
    for(i=0;i<num+1;i++){

        for(j=num-i;j>0;j--){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("o");
        }
        if(i>1){
          for(l=0;l<k-1;l++){
              printf("o");
        }  
        }
        
        printf("\n");
    }
    for(i=1;i<num+1;i++){
        for(k=0;k<i;k++){
            printf(" ");
        }
        for(j=num-i;j>0;j--){
            printf("o");
        }
        
          for(l=0;l<num-i-1;l++){
              printf("o");
        }  
        
        printf("\n");
    }
}
