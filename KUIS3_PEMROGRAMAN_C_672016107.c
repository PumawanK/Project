#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int v,w,x,y,z;
void main(){
system("CLS");
printf("Masukkan Jumlah Perulangan = ");
scanf("%i", &w); w=w*2+1;
x=1;
    while(x<=w){
    y=0;
        while(y<x){
        printf(" ");
        y++;
        }
            if (x==(w+1)/2){
            printf("\t");
            } else {
            z=0;
            while(z>=2*(x-w)){
            printf("#");
            z--;
            }
            }
    printf("\n");
    x++;
    }
}


