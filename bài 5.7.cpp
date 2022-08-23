#include <stdio.h> 
int main(){
	int i, j, n; 
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
	  for (i=0;i<n;i++){
	  	 for (j=0;j<i;j++){
        while (arr[j]==arr[i]){
        printf("nhap lai gia tra cua %d",i);
            scanf("%d",&arr[i]);
            }
        }
    
    }
            printf("mang vua nhap la  ");
        for (i=0;i<n;i++){
        printf("%d\t",arr[i]);}
     
}
