#include <stdio.h>
#include <conio.h>

int main()
{
    int count=0;                                           
    char sentence[100];
    int vowel=0,alphabet=0; 

    while(true){                                
    printf("Enter sentence: ");                          
    scanf(" %[^\n]", sentence);
    
    while(sentence[count]!='\0'){
      if(sentence[count]=='a' || sentence[count]=='i' || sentence[count]=='o' || sentence[count]=='u' || sentence[count]=='e'){
        vowel++;
      }
      else if(sentence[count]!=' '){alphabet++;}
      count++;
    }
    printf("sentence length : %d \n",vowel+alphabet);
    printf("vowel %d \nalphabet %d\n",vowel,alphabet);
    }

    getch();                                                                                                    
    return 0;                                              
}
