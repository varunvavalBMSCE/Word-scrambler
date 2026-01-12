#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
#include <time.h>  
  
// Function to scramble a word  
void scramble(char word[]) 
{     int len = strlen(word);    
 for (int i = 0; i < len; i++)     
 {        
   int j = rand() % len;     
   char temp = word[i];       
   word[i] = word[j];        
   word[j] = temp;  
    }  
}  
  
int main() {     char words[10][20] = {         
"computer",  
        "science",  
        "program",  
        "engineer",  
        "college",  
        "keyboard",  
        "monitor",  
        "internet",  
        "software",  
        "hardware"  
    };  
  
    char guess[20];  
    char original[20];  
  
    srand(time(NULL));  
  
    // Choose a random word     int index = rand() % 10;  
    strcpy(original, words[index]);  
  
    // Scramble the word  
    scramble(words[index]);  
  
    printf("Guess the word: %s\n", words[index]);     printf("Enter your guess: ");  
    scanf("%s", guess);  
  
    // Check answer    
            if (strcmp(guess, original) == 0)      {
              printf(" Correct! Well done.\n");  
    }     
            else  
    {         
      printf(" Wrong!\n");        
      printf("Correct word was: %s\n", original);
    }  
  
    return 0;  
}
