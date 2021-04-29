#include <stdio.h>

void main()
{
    char ch;

    printf("Please Enter an alphabet: ");
    scanf(" %c", &ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        
         {
		printf("\n %c is a Vowel.", ch);
	}

    else {
    	printf("\n %c is a Consonant.", ch);
	}
   
}