#include<stdio.h>
#include<conio.h>
int global = 30;
void print(){
    printf("Function A\n");
    printf("i can see global :%d\n",global);
    printf("i can't see local of main:\n");
    printf("global +=1\n");
    printf("********************************\n");
    global++;
    

}
void print(int a){
    printf("Function B\n");
    printf("i can receive \"local\" in a as parameter: %d\n",a);
    printf("all i do is just copying the passing value in to my local variable\n");
    printf("so if i change it, it won't affect main's local variable\n");
    a+=5000;
    printf("let's see i changed it too %d\n",a);
    global++;
    printf("but i can change global\n");
    printf("global +=1\n");
    printf("********************************\n");
    
}
int main(){
    int local = 1,globalguess = 0,localguess = 0;
    printf("Function main\n");
    printf("starting at global = 30 and local = 1\n");
    printf("********************************\n");
    print();
    print(local);
    global++;
    printf("global +=1\n");
  
    do
    {
          printf("guess the global value: ");
          scanf("%d",&globalguess);
        if(globalguess!=3){
            printf("that is incorrect try again ☺\n");
        }
        else
        {
            printf("***************************\n");
            printf("*congratulations u got a ♥*\n");
            printf("***************************\n");
        }
        
    } while (globalguess!=3);
        do
    {
          printf("guess the local value: ");
          scanf("%d",&localguess);
        if(localguess!=1){
            printf("that is incorrect try again ☻\n");
        }
        else
        {
            printf("***************************\n");
            printf("*congratulations u got a ♥*\n");
            printf("***************************\n");
        }
        
    } while (localguess!=1);
    
    
    printf("********************\n");
    printf("*you have ♥♥ hearts*\n");
    printf("********************\n");
    getch();

}

