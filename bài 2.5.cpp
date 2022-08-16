#include <stdio.h>
int main(){
    int i,n;
    int a = 1;
 
    printf("Nhap n=");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        a = a * i;
    }
    printf("%d!=%d\n",n,a);
}
