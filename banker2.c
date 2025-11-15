#include<stdio.h>
int main(){
int p,r;
printf("enter the no:of process\n");
scanf("%d",&p);
printf("enter the no: of resources\n");
scanf("%d",&r);

int alloc[p][r],max[p][r],need[p][r];
int avail[r];

printf("enter the allocation matrix\n");
for(int i=0;i<p;i++){
for(int j=0;j<r;j++){
 scanf("%d",&alloc[i][j]);
 }}
 printf("enter the max matrix\n");
for(int i=0;i<p;i++){
for(int j=0;j<r;j++){
 scanf("%d",&max[i][j]);
 }}
 printf("enter the available matrix\n");
for(int i=0;i<r;i++){
//for(int j=0;j<r;j++){
 scanf("%d",&avail[i]);
 }
 
 for(int i=0;i<p;i++){
for(int j=0;j<r;j++){
need[i][j]=max[i][j]-alloc[i][j];
}}
printf("max matrix\talloc matrix\tneed matrix");
for(int i=0;i<p;i++){
printf("\n");
for(int j=0;j<r;j++){
printf("%d",max[i][j]);
}
printf("\t\t");
for(int j=0;j<r;j++){
printf("%d",alloc[i][j]);
}
printf("\t\t");
for(int j=0;j<r;j++){
printf("%d",need[i][j]);
}
}
printf("\n");


int finish=0;
for(int i=0;i<p;i++){
for(int j=0;j<r;j++){
if(need[i][j]>avail[j]){
finish=1;
break;
}
/*if(j==r){
for(int k=0;k<r;k++){
avail[k]+=alloc[i][k];
}}*/
}}
if(finish==1){
printf("there is no safe sequence present\n");}
else{
printf("there is a safe sequence present\n");
printf("\t****safe sequence****\n");
for(int i=0;i<p;i++){
printf("< P%d>",i+1);
}


}


return 0;
}
