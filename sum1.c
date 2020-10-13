
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){

int num;
int sum=0;

int z,d;
int line=0;
while (1==1){  //inifinite loop that catches it up
FILE *fp = fopen("values1.txt", "r");
while(fp!=NULL){
	while(!feof(fp)){   //iterates through file and gets every character
	line++;
	if (line>50){  //makes sure it doesnt add an extra number by accident
	break;
	}
	fscanf(fp, "%i", &num);
	sum = sum+num;
	}

fclose(fp);
FILE *v = fopen("sum1.txt","w");
fprintf(v,"%d",sum);//write sum into sum1 file

fclose(v);
break;	}

if(fp!=NULL){  //ends the loop

break;}

}}

