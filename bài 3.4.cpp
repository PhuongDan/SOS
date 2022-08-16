#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int s=0;
	while(n!=0){
		s+=n%10;
		n/=10; 
	} 
	printf("Tong cac chu so cua so nguyen n la %d",s); 
} 
