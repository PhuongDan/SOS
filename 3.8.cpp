#include <stdio.h>
int tongcacso(int n){
		int s=0;
	while(n!=0){
		s+=n%10;
		n/=10; 
	} 
	return s; 
}
int main()
{int n; 
	printf("Nhap n=");
	scanf("%d",&n);
	int s=tongcacso(n);
	printf("Tong cac so =%d",s); 
 } 
