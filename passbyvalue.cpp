#include<stdio.h>
#include<conio.h>
//dead -3 kill +1 
void dead(int *num){
    *num-=3;
    if(*num<=0){
        *num=0;
    }
}
void kill(int *num){
    
    *num+=1;
}
int main(){
    char kd;
    int charge = 14;
       while(true){
        printf("k or d :");
        scanf(" %c",&kd);
                switch(kd){
                    case 'k':
                    kill(&charge);
                    printf("u killed someone");
                    printf("\n");
                    printf("blood stone charges = %d",charge);
                    printf("\n");
                    break;
                    case 'd':
                    dead(&charge);
                    printf("u dead");
                    printf("\n");
                    printf("blood stone charges = %d",charge);
                    printf("\n");
                    break;
                    
                }
    }

getch(); 
return 0;

}