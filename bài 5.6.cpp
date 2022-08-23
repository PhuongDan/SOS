#include <stdio.h>
int main(){
	int n, min ,i;
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
        int dem=0;
    for (i=0;i<n;i++){
        if (arr[i]>0){
            dem+=1;
            break;
            }
        }
                if (dem!=0){
            min=arr[i];
        }
    for (i=0;i<n;i++){
        if (arr[i]>0 && min>arr[i]){
            min=arr[i];
            }

        }
    printf("so duong nho nhat la %d", min );
    }
