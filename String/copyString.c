#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "mirza ms";
    char* s2 = s1; 
    s1[0] = 'M';
    printf("%s", s2); // here s1 and s2 both are changed.. which is call shallow copy.
    
     

    return 0;
}