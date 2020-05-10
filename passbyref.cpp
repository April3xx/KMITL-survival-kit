#include<stdio.h>
#include<conio.h>
//dead -3 kill +1 
// why do address of num in dead and kill is the same? is it reusing ? 
void dead(int *num){
    *num-=3;
    if(*num<=0){
        *num=0;
    }
    printf("num address in dead function %u",&num);
    printf("\n");
    printf("num value in dead function %u",num);
    printf("\n");
}
void kill(int *num){
    
    *num+=1;
    printf("num address in kill function %u",&num);
    printf("\n");
    printf("num value in kill function %u",num);
    printf("\n");
}
void testfunction(int *t){
    printf("test address %u",&t);
    printf("\n");
    printf("test value %u",t);
    printf("\n");
}

int main(){
    char kd;
    int charge = 14;
    int test = 3000;
    testfunction(&test);
    printf("main function address %u",&charge);
    printf("\n");
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
                    printf("switch kill address %u",&charge);
                    printf("\n");
                    break;
                    case 'd':
                    dead(&charge);
                    printf("u dead");
                    printf("\n");
                    printf("blood stone charges = %d",charge);
                    printf("\n");
                    printf("switch dead address %u",&charge);
                    printf("\n");
                    break;
                    default:
                    break;
                    
                }
    }

getch(); 
return 0;

}