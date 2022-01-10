#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
int main()
{
    FILE *fp;
    int radix=10;
    char string[100];
    double logresult=0;
    char resultstring[100];

    fp=fopen("C:\\testtxt\\test.txt","w+");
    if(fp==NULL){
        puts("unable");
        printf("error");
        return -1;
    }
    else{
        fputs("상용로그표\n",fp);
        for(double i=1; i<10; i=i+0.01){
            fputs("log ",fp);
            sprintf(string, "%.2f", i);
            fputs(string,fp);
            fputs(" = ",fp);
            logresult=log10(i);
            sprintf(resultstring,"%f",logresult);
            fputs(resultstring,fp);
            fputs("\n",fp);
        }
        fclose(fp);
        system("C:\\testtxt\\test.txt");
        return 0;
    }
    
}
