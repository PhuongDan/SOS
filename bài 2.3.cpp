#include <stdio.h> 
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int i;
	for (i=n-1;i>0;i--){
		
		if(i%6==0){
			
		printf("%d\n",i);
		break; 
	} 
	
}
}
