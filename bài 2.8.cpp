#include <stdio.h>
#include <math.h> 
bool tamgiac(int a,int b,int c){
    if (a+b>c && a+c>b && b+c>a){
        return true;
        }else{ 
        return false;}
    }

int chuvitg(int a,int b, int c){
int cvtg;
  cvtg=a+b+c;
  return cvtg;
}
float dientich(int a, int b, int c){
    float p;
    float s;
        p=(float)chuvitg(a,b,c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
     return s;
    }

int main(){
   int a,b,c;
  printf("Nhap a=");
  scanf("%d",&a);
   printf("Nhap b=");
  scanf("%d",&b);
   printf("Nhap c=");
  scanf("%d",&c);
  if (tamgiac(a,b,c)){
   float s=dientich(a,b,c);
   printf("\nDien tich tam giac la %f",s);
   }else{
       printf("khong phai la canh cua tam giac");
   }
}
