#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>



int main(){

int num;
int sum=0;
char c[999];

int z=1;

while(z==1){
FILE *fp = fopen("values2.txt", "r");
while(fp!=NULL){

while(!feof(fp)){	//iterates through file and gets all characters	
	fscanf(fp, "%i", &num);
	sum = sum+num;    //adds number to prev number
}

fclose(fp);
FILE *v = fopen("sum2.txt","w");
fprintf(v,"%d",sum);// puts sum gotten into new text file
fclose(v);
z=2;
break;
}
if (fp!=NULL){   //breaks while loop in the end
break;
}

}	
}
