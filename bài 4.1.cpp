#include <stdio.h> 
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int s=0;
	int i=1;
	while(i<n){
		if(n%i==0){
		s=s+i;
		printf("%d\n",i);
		}
		i++;
	} 
	printf("Tong  so uoc la %d",s);
}
	
