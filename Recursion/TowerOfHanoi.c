#include<stdio.h>
void towerofhanoi(int n, char source, char helper, char destination){
    if(n==0) return;
    towerofhanoi(n-1,source, destination, helper);
    printf("%c --> %c\n", source, destination);
    towerofhanoi(n-1, helper, source, destination);
    return;
} 
int main(){
    int n;
    printf("Enter the disks number: ");
    scanf("%d", &n);
    towerofhanoi(n, 'A', 'B', 'C');
    return 0;
}