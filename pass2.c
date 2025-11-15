#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct symtab{
char label[20];
};

int main(){
int address;
int LOCCTR=address;

    FILE *fp,*fp1,*fp2,*fp3,*fp4,*fp5;
    char ch;
    
    fp=fopen("assemblyList.txt","r");
    fp1=fopen("intermediate.txt","r");
    fp2=fopen("optab.txt","r");
    fp3=fopen("symtab.txt","r");
    fp4=fopen("objectCode.txt","r");
    fp5=fopen("output.txt","w");
    
    if(fp == NULL){
    printf("Error Happened Can't Open assemblyList file");
    return 1;
    }
    
     while((ch=fgetc(fp)) != EOF)
    putchar(ch);
    fclose(fp);
    
    int locctr=0;
    int operand=1;
    int loc;
    int opcode;
    char label;
    
     if ((opcode, "WORD") == 0)
            fscanf( fp5,"%d\t%s\t00000%s\n", loc, opcode, operand);
        else if ((opcode, "RESW") == 0 ||(opcode, "RESB") == 0)
             fscanf( fp5,"%d\t%s\t%s\n", loc, opcode, operand);
        else if ((opcode, "BYTE") == 0)
            fscanf( fp5,"%d\t%s\t%s\n", loc, opcode, operand);
        else { // machine opcode
            int symCount,sym[20];
            for (int i = 0; i < symCount; i++) {
                if ((sym[i],label, operand) == 0) {
                    fscanf(fp5,"%d\t%s\t%04d\n", loc, opcode, sym[i],address);
          
                    break;
                }
            }
            }
          printf("Opening objectCode.txt in text editor...\n");


    if(system("gedit objectCode.txt")!=0){
    if(system("nano objectCode.txt")!=0){
    
    system("vi objectCode.txt");
    
    }
    }
    
    return 0;
    }
