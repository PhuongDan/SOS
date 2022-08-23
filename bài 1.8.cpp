#include <stdio.h>
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

int main(){
   int a,b,c;
  printf("Nhap a=");
  scanf("%d",&a);
   printf("Nhap b=");
  scanf("%d",&b);
   printf("Nhap c=");
  scanf("%d",&c);
  if (tamgiac(a,b,c)){
   int cvtg=chuvitg(a,b,c);
   printf("Chu vi tam giac la %d",cvtg);
   }else{
       printf("khong phai la canh cua tam giac");
   }
}
