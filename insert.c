#include<stdio.h>
#include <stdlib.h>
        
int main(){
    int i,n,a[100];
    printf("enter the size of the array\n");
    scanf("%d",&n);
    
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
printf("the original array=\n");
for(i=0;i<n;i++){
printf("%d\t ",a[i]);
}

//insertion sort

for(i=1;i<n;i++){
    int j;
    int key = a[i];
    j=i-1;
    
    while(j >=0 && a[j]>key){
    a[j+1] = a[j];
    j--;
    }
    a[j+1]=key;
    
}
printf("\nsorted array=");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
return 0;
}
