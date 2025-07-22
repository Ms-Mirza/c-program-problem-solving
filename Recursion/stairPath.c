// nth stair problem: Given a number n, find the total number of ways to reach the nth stair if you can take 1, 2 steps at a time.

/*#include<stdio.h>
int stair(int n){
    if (n==1 || n==2) return n;  // base case
    return stair(n-1)+ stair(n-2); // recursive case
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int ways = stair(n);
    printf("Total ways to reach %dth stair: %d\n", n, ways);
    return 0;
    
}*/

// nth stair problem: Given a number n, find the total number of ways to reach the nth stair if you can take 1, 2 or 3 steps at a time.

#include<stdio.h>
int stair(int n){
    if (n==0) return 1;  // base case
    if(n==1 || n==2) return n;
    return stair(n-1)+ stair(n-2) + stair(n-3); // recursive case
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int ways = stair(n);
    printf("Total ways to reach %dth stair: %d\n", n, ways);
    return 0;
    
}