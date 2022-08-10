#include <stdio.h> 
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int i=0;
	while(i<=n){
		i++;
		if(n%i==0){
			printf("%d\n",i); 
		} 

	} 
}
