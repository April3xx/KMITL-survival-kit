#include<stdio.h>
int main(){
    int skillno;
    char cmskill[4][20];//={"crystal nova","frost bite","arcane aura","freezing filed"};
    for(skillno=0;skillno<4;skillno++){
        printf("scanning skillno.%d :",skillno);
        scanf(" %[^\n]",cmskill[skillno]);
    }
    
    printf("%s",cmskill[0]);
    printf("%s",cmskill[1]);
    printf("%s",cmskill[2]);
    printf("%s",cmskill[3]);


    


}