#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
        int dem=0;
        float tb;
        int s=0;
    for (int i=1;i<=n;i++){
        if (arr[i] %2==1){
            dem+=1;
            s=s+arr[i];
            tb=s/(float)dem;
            }
         }
         printf("trung binh cong so le la %f",tb);
    }

