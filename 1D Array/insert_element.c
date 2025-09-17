#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr1[n+1];
    int insert_i = 3, insert_e = 100;
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0, j=0; i<=n, j<n; i++, j++){
        if (i==insert_i-1) arr1[i]=insert_e;
        else 
            arr1[i]=arr[j];
    }
    for(int i=0; i<n; i++) printf("%d ", arr1[i]);
    return 0;
}