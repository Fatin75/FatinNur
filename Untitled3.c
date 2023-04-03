#include<stdio.h>
int main(){
    char a[100];
    int count1=0,count2=0;
    scanf("%s",a);
    int n=strlen(a);
    for(int i=0;i<n;i++){
        if(a[i]=='a') count1++;
        else count2++;
    }
    if(count1>count2) printf("%d\n",count1+count2);
    else printf("%d\n",2*count1-1);
    return 0;
}
