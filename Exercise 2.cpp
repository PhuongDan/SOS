#include <stdio.h>
int main(){
	int n ,i, x, kt, ktgn;
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	for(i<arr[0];i>=0;i--){
		printf("%d ", arr[i]);
	}
}
}


