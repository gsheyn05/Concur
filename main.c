#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//GIVES right result

int copyfile(char *x){

FILE *f=fopen( x, "r"); //  for read
char c;

FILE *f2= fopen("values1.txt","w");

int maxLine =50;
int line=0;
        
while ((line < maxLine) && (!feof(f))){   //WHILE loop that copies half of file to the values file
        c=getc(f);
        if (c=='\n'){
        line++;}
        if (c != EOF){
        putc(c,f2);

        }
        }

fclose(f);
fclose(f2);
}
int copyfile2(char *x){

FILE *f=fopen( x, "r"); //  for read
char c;

FILE *f3= fopen("values2.txt","w");

int line=0;

while ((!feof(f))){   //WHILE loop that copies half of file to the values file
        c=getc(f);
if (c=='\n'){
        line++;}

if (line>=50&& line<100){  //used to count the line numbers correctly
        putc(c,f3);}}
        

fclose(f);
fclose(f3);
}




int main(int argc , char *argv[]){
FILE *f = fopen(argv[1], "r"); //  for read

copyfile(argv[1]);
copyfile2(argv[1]);

while(1==1){   //infinite loop used here
FILE *v = fopen("sum1.txt", "r");
FILE *v2= fopen("sum2.txt","r");
while(v!=NULL && v2!=NULL){ //scand number in sum file when they become available
	int number;
	int final= fscanf(v,"%d",&number);
	int number2;
	int final2= fscanf(v2,"%d",&number2);
	printf("THE SUM IS %d",number2+number); //takes both numbers and adds them
	break;

}

if(v!=NULL && v2!=NULL){ //ends loop
break;
}


}}




