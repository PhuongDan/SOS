#include <stdio.h>
int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
    int f1 = 0;
    int f2 = 1;
    int f3 = 0;
    for (int i=0;i<n;i++) {
            f1 = f2;
            f2 = f3;
            f3 = f1 + f2; 
           printf("%d\n",f3); 
        }
} 
