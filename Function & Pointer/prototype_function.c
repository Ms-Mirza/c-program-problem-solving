// important note: When calling a functions, that function must be defined above the place where it is called. but if called-function(child function) is below the function(parent function) then to avoid the error we use prototype function....

#include<stdio.h>

int main() //parent function
{
    void bangladesh(); // prototype function.
    bangladesh();
    return 0;
}
void bangladesh() // child function
{
    printf("I am a bangladeshi citizen");
    return;
}