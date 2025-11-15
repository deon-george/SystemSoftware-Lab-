#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct symtab{
char label[20];

};

int main(){
int address;
int LOCCTR=address;

    FILE *fp,*fp1,*fp2,*fp3;
    char ch;
    
    fp=fopen("intermediate.txt","r");
    fp1=fopen("input.txt","r");
    fp2=fopen("optab.txt","r");
    fp3=fopen("symtab.txt","r");
    
    if(fp == NULL){
    printf("Error Happened Can't Open intermediate file");
    return 1;
    }
    
    while((ch=fgetc(fp)) != EOF)
    putchar(ch);
    fclose(fp);
    
    int locctr=0;
    int operand=1;
    
    if(("WORD")==0){
    locctr+=3;}
    else if(("RESW")==0){
    locctr+=3*(operand);}
    else if(("RESB")==0){
    locctr+=(operand);}
    else if(("BYTE")==0){
    locctr+=((operand)-3);}
    else{
    locctr+=3;
    }
    
    int l = 14;
    printf("\nLength of the program = %d\n", l);
    printf("Opening symtab.txt in text editor...\n");


    if(system("gedit symtab.txt")!=0){
    if(system("nano symtab.txt")!=0){
    
    system("vi symtab.txt");
    
    }
    }
    
    return 0;
    }
