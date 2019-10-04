#include "include.h"
int main(void){
    FILE *fp;
    int random = rand() % 1001;
    printf("%d\n",random);
    fp = fopen("sharkrandomnum.txt", "w"); 
    if(fp == NULL) {
        printf("file can't be opened\n");
        exit(1);
    } 
    fprintf(fp, "%d\n",random);
    fclose(fp); 
    return 0;
}