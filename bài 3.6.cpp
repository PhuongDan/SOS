#include <stdio.h>
int main(){
	int n, x;
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
          printf("nhap x:");
         scanf("%d",&x);
         for(int i=0;i<=n;i++){
         	if(arr[i]==x){
         		printf("x co trong mang");
			}else{
			printf("x khong co trong mang"); 
			} 
			break; 
			 } 
		 }
           
