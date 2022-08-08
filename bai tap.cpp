#include<stdio.h>
#include<math.h>
int main(){
	int d;
	printf("Nhap ngay=");
	scanf("%d",&d);
	int m;
	printf("Nhap thang=");
	scanf("%d",&m);
	switch(m){
	case 1:m=0;break;
	case 2:m=31;break;
	case 3:m=59;break;
	case 4:m=90;break;
	case 5:m=120;break;
	case 6:m=151;break;
	case 7:m=181;break;
	case 8:m=212;break;
	case 9:m=243;break;
	case 10:m=273;break;
	case 11:m=304;break;
	case 12:m=334;break;}
	int n=d+m;
	printf("So ngay trong nam la %d",n); 
	switch(n%7){
		case 1:d=2;break;
		case 2:d=3;break;
		case 3:d=4;break;
		case 4:d=5;break;
		case 5:d=6;break;
		case 6:d=7;break;
		case 7:d=1;break;}
		int t=d;
		if (t==1){
		printf ("Hom nay la chu nhat");}
		else{
	
		printf(" Hom nay la thu %d",t);
	}
}
