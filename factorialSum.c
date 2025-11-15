#include<stdio.h>
int main(){
int n,i,j;
int fact=1,sum=0;
printf("enter the limit\n");
scanf("%d",&n);

for(i=1;i<=n;i++){

for(j=1;j<=i;j++){
fact=fact*j;

}
 sum+=fact;}
printf("sum of the factorials upto%d=%d",n,sum);
return 0;
}
