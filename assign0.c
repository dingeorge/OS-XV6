#include<stdlib.h>
#include<stdio.h>

void magic(int);

int main(void){
	printf("In function main, address of main is %d \n", main);
	magic(10);
	printf("returned right after magic \n");
	printf("skipped instruction after magic \n");
	return 0;
}

void magic(args){
char buffer[5];
int * ret;

if (args == 10){
ret = (int*)(buffer + 13);
(*ret) += 12;
}

}
