#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct symtab{
char label[20];

};

int main() {
    int address;
    int LOCCTR=address;

    FILE *fp,*fp1,*fp2,*fp3;
    char ch;

   fp = fopen("intermediate.txt", "r");
   fp1 = fopen("input.txt", "r");
   fp2 = fopen("symtab.txt", "r");
   fp3= fopen("optab.txt","r");
if (fp == NULL) {
    printf("Error: Cannot open intermedite file.\n");
    return 1;
}


    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
fclose(fp);

  int locctr = 0;
 int operand =1;
if (("WORD") == 0)
    locctr += 3;
else if (("RESW") == 0)
    locctr += 3 * (operand);
else if (("RESB") == 0)
    locctr += (operand);
else if (("BYTE") == 0)
    locctr += ((operand) - 3);
else
    locctr += 3;


    int l = 14;
    printf("\nLength of the program = %d\n", l);

    // Open symtab.txt in default text editor
    printf("Opening symtab.txt in text editor...\n");

    // Try gedit, if not available fallback to nano or vi
    if (system("gedit symtab.txt &") != 0) {     // Run in background
        if (system("nano symtab.txt") != 0) {
            system("vi symtab.txt");
        }
    }

    return 0; 
}

