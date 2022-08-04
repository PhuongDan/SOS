#include <stdio.h> 
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);

	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c=");
	scanf("%d",&c);
	if(a>b & a>c)
		printf("%d la so lon nhat",a);
	else
		if(b>c)
			printf("%d la so lon nhat",b);
	else
			printf("%d la so lon nhat",c); 
		 
		}
		
		
