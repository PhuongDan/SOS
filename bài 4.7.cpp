#include <stdio.h>
#include <math.h> 
int main(){
	int n ,i, min, max;
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
     max=arr[0];
    for (i=0;i<n;i++){
    if (arr[i]>max){
        max=arr[i];
        }
    }
        min=arr[0];
        for (i=0;i<n;i++){
    if (arr[i]<min){
        min=arr[i];
        }
    }
    if(max>abs(min)){
	
    printf("Doan chua tat ca gia tri trong mang la=[-%d;%d]",max,max);
}else{printf("Doan chua tat ca gia tri trong mang la=[%d;%d]",min,abs(min)); 
} 
    }
