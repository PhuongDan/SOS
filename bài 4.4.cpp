#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int s=0;
	do{
     s = n% 10;
  }while(n /= 10);
  printf("Chu so dau tien cua n la  %d",s);
}
