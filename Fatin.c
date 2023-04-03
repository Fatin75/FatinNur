#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int out[T];
    for(int i=0;i<T;i++){
        int x,y,a,b;
        scanf("%d%d%d%d",&x,&y,&a,&b);
        if(((y-x)%(a+b))==0) out[i]=((y-x)/(a+b));
        else out[i]=-1;
    }
    for(int i=0;i<T;i++) printf("%d\n",out[i]);
    return 0;
}
