#include <stdio.h> 
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int n2=0;
	while(n!=0){
		n2=n2*10+n%10;
		n/=10; 
	}
	printf("%d",n2);
}
