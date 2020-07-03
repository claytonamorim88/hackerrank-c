#include <stdio.h>
#include <stdlib.h>

int playingWithCharacters(){
	char ch, s[100], sen[100];
	
	scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
	
}
