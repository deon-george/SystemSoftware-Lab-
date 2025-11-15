#include<stdio.h>
int main(){
  int n;
  printf("enter the no: of process\n");
  scanf("%d",&n);
  
  int bt[n],wt[n],tat[n],pid[n];
  int total_wt=0,total_tat=0;
  
  for(int i=0;i<n;i++){
  printf("enter burst time for each processes P[%d]\n",i);
  scanf("%d",&bt[i]);}
  for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparisons and swaps in each pass
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (bt[j] > bt[j + 1]) {
                // Swap if they are in the wrong order
               int temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;
                
                 temp = pid[j];
                pid[j] = pid[j + 1];
                pid[j + 1] = temp;
            }
        }
    }
  
  wt[0]=0;
  for(int i=1;i<n;i++){
  wt[i]=wt[i-1]+bt[i-1];
  }
  
  for(int i=0;i<n;i++){
  tat[i]=bt[i]+wt[i];
  }
  
  printf("\nprocess\tburst_Time Waiting_time Turn_around_time\n");
  for(int i=0;i<n;i++)
  {
  printf("P%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
  total_wt+=wt[i];
  total_tat+=tat[i];}
  printf("\n average waiting time =%0.2f",(float)total_wt/n);
  printf("\n average turn around time =%0.2f",(float)total_tat/n);
  
  printf("\n gantt chart:\n");
  for(int i=0;i<n;i++)
  {
  printf(" P%d  |",i+1);
  }
  printf("\n0");
  int time=0;
  for(int i=0;i<n;i++){
  time+=bt[i];
  printf(" %d\t",time);}
  printf("\n");
return 0;
}
  
  
