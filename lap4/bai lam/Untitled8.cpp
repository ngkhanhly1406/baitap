#include <stdio.h>

int main ()
{
	char ch;
	printf ("\nEnter a lower cased alphabet (a - z): ");
	scanf ("%d",&ch );
 if (ch < 'A'|| ch > 'z')
    printf ("\nChracter not a lower cased alphabet");
    
        switch (ch)
        {
        	case 'a':
        	case 'e':
            case 'i':
            case 'o':
            case 'u':
            	printf ("\nCharacter is a vowel");
            	break;
            case 'z':
            	printf("\nLast Alphabet (z) was entered");
            	break;
            default :
          	printf("\nCharacter is a consonant");
            	break;
		}
}
