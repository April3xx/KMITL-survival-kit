#include<stdio.h>

int main(){
    int input;
    do{
    scanf("%c",&input);
    switch(input){
        case('1'):
        printf("hello\n");
        break;
        case('2'):
        printf("thank you\n");
        break;
        case('3'):
        printf("goodbye\n");
        break;
        default:
        printf("sorry\n");
        break;
    }
    } while(input!='3');
}