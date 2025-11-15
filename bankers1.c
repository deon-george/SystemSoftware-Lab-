#include<stdio.h>
 int main(){
 int p,r;

  printf("enter the no: of process\n");
  scanf("%d",&p);
  
  printf("enter the no: of resources\n");
  scanf("%d",&r);
  int max[p][r],alloc[p][r],need[p][r];
  int avail[r],safe[p],finish[p];

  printf("enter the elements in max matrix\n");
  for(int i=0;i<p;i++){
  for(int j=0;j<r;j++){
  
  scanf("%d",&max[i][j]);
  }}
  
  printf("enter the elements in alloc matrix\n");
   for(int i=0;i<p;i++){
  for(int j=0;j<r;j++){
  
  scanf("%d",&alloc[i][j]);
  }}
   printf("enter the elements in available matirx\n");
   for(int j=0;j<r;j++){
   scanf("%d",&avail[j]);
   }
   
   printf("the need matrix\n");
   for(int i=0;i<p;i++){
   for(int j=0;j<r;j++){
   need[i][j]=max[i][j]-alloc[i][j];
   //printf("%d\t",need[i][j]);
   }}
   printf("\n max\t\t allocation\t need\n");
   for(int i=0;i<p;i++){
   for(int j=0;j<r;j++){
    printf("%d",max[i][j]);}
   printf("\t\t");
   
   for(int j=0;j<r;j++){
    printf("%d",alloc[i][j]);}
   printf("\t\t");
   
   for(int j=0;j<r;j++){
   printf("%d",need[i][j]);}
   
   printf("\n");
   }
   
   int work[r];
   //printing safe squenece
   //initialising finish=0 && work=available 
   for(int i=0;i<p;i++){
   finish[i]=0;
   for(int i=0;i<r;i++){
   work[i]=avail[i];
   }}
   int count=0;
   
   while(count<p){
   int found=0;
   int canExecute;
   for(int i=0;i<p;i++){
   if (finish[i]==0){
    canExecute=1;
   
   for(int j=0;j<r;j++){
   if(need[i][j]>work[j]){
   canExecute=0;
   break;
   }}
   if(canExecute){
   for(int k=0;k<r;k++)
   work[k]+=alloc[i][k];
   safe[count++]=i;
   finish[i]=1;
   found=1;
   }
   }}
   if (!found) {
            printf("\nSystem is NOT in a safe state.\n");
            return 0;
        }
    }

    printf("\nSystem is in a SAFE state.\nSafe sequence: ");
    for (int i = 0; i < p; i++)
        printf("P%d ", safe[i]);
    printf("\n");

    return 0;
}
   
   
   
   
