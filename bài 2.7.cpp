#include <stdio.h>
#include <math.h> 
int main(){
	int n ,i, x, kt, ktgn;
	printf("Nhap kich thuoc cua tap hop :");
	scanf("%d",&n);
	printf("Nhap x=");
	scanf("%d",&x); 
	int arr[n]; 
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
    ktgn=10000000;
    for (i=0;i<n;i++){
    if (x!=arr[i]){
    if (ktgn>abs(arr[i]-x)) {
        ktgn=abs(arr[i]-x);
        kt=arr[i];
        }
    }
}
 printf("Gia tri gan %d nhat la",x);
    for (i=0;i<n;i++){
        if (ktgn==abs(arr[i]-x))
    printf("\t%d",arr[i]);
    }
        }
