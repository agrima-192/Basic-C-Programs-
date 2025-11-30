#include<stdio.h>

char strA[80]="A string to be used for demonstration purposes";
char strB[80];

int main(void)
{
    char *pA;  //a pointer to type character
    char *pB;  //another point to type character
    puts(strA);  //show string A
    pA=strA;  //point pA at string A
    puts(pA);  //show what pA is pointing to
    pB=strB;  //point pB at string B
    putchar('\n');  //move down one line on the screen
    while(*pA!= '\0')  //line A (see text)
    {
                *pB++=*pA++;
    }
    *pB = '\0';
    puts (strB);
    return 0;
}
