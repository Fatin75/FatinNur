#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>0) count++;
        }
    if(count%2==0) printf("Bob\n");
    else printf("Alice\n");
    }
    return 0;
}
