#include <stdio.h>
int main(){
    int n; 
    float s=0; 
    printf("Nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){     
	s+=(float)1/i;
    }  
    printf("S=%f",s);
}
