#include <stdio.h>
int main(){
	int n ,i, x, kt, ktxn;
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	printf("Nhap x=");
	scanf("%d",&x); 
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
        int j=0;
         ktxn=(arr[0]-x);
    for (i=0;i<n;i++){
        if (x>=arr[i]){

       if (x-arr[i]>ktxn){
           ktxn=x-arr[i];
           j=i;
           }
       }else {
           if (arr[i]-x>ktxn){
               ktxn=arr[i]-x;
               j=i;
               }
           }
           }
           printf("gia tri xa x nhat la %d",arr[j]);
       }
