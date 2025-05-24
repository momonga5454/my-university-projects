#include<stdio.h>
 int main(void){
 double det;//行列式用の変数
double a11, a12,a21, a22;//行列Aの要素
double ia11,ia12, ia21,ia22;//逆行列
//行列Aの要素を入力
printf("a11="); scanf("%lf",&a11);
 printf("a12="); scanf("%lf",&a12);
 printf("a21="); scanf("%lf",&a21);
 printf("a22="); scanf("%lf",&a22);
 det=a11*a22-a12*a21;//行列式の計算
if(det==0){
 printf("A is not invertible.\n");
 }else{
 ia11 = a22/det; ia12 = -1*a12/det;
 ia21 = -1*a21/det; ia22 = a11/det;
 printf("det A=%5.2lf\n",det);
 //A*A^{-1}=I(Iは単位行列)の表示
//表示1行目
printf("|%5.2lf %5.2lf||%5.2lf%5.2lf|=|%5.2lf%5.2lf|\n",
 a11, a12,ia11,ia12,
 a11*ia11+a12*ia21,
 a11*ia12+a12*ia22);
  //表示2行目
printf("|%5.2lf%5.2lf||%5.2lf %5.2lf|  |%5.2lf%5.2lf|\n",
 a21,a22,ia21,ia22,
 a21*ia11+a22*ia21,
 a21*ia12+a22*ia22);
 }
 return 0;
 }