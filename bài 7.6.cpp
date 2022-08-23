#include <stdio.h>
int main(){
	int n ,i, j, k;
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
        int d,c;
        int max=0,s=0;
    for (i=0;i<n;i++){
      for (j=i;j<n;j++){
          s=0;
         for (k=i;k<=j;k++) {
             if (arr[k]>0){
                 s=s+arr[k];
                 }else i++;
             }
             if (max<s){
                 max=s;
                 d=i;
                 c=j;
                 }
          }
    }
    printf("chuoi so duong: ");
    for (i=d;i<=c;i++){
    printf("\t%d",arr[i]);
    }
    printf ("\ntong lon nhat cua chuoi so duong la %d",max);
    }
