#include <stdio.h> 
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int x=0;
	while(n!=0){
		if(x<n%10){
			x=n%10; 
		} 
		n=n/10; 
	}
	printf("chu so lon nhat la %d",x);
}
