// pre in post
/*
#include <stdio.h>
void preInPost(int n){
    if(n==0) return;
    printf("pre %d\n", n);
    preInPost(n-1);
    printf("In %d\n", n);
    preInPost(n-1);
    printf("post %d\n", n);
    preInPost(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    preInPost(n);
    return 0;
}*/

// Zigzag pattern
#include <stdio.h>
void zigzag(int n){
    if(n==0) return;
    printf("%d ", n);
    zigzag(n-1);
    printf("%d ", n);
    zigzag(n-1);
    printf("%d ", n);
    zigzag(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    zigzag(n);
    return 0;
}