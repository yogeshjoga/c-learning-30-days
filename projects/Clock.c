#include<stdio.h>
#include<windows.h>
int main(){
    int s,m,h;
    int d=1000;
    printf("Set The Inital Time :");
    scanf("%d%d%d", &s,&m,&h);
    if(h>24 || m>60 || s>60){
        printf("Fucking! Set the correct Time");
        exit(0);
    }
    while(1){
        s++;
        if (s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>24){
            h=1;
        }
        printf("\n Time right now :");
        printf("%02d:%02d:%02d", s,m,h);
        Sleep(d);
        system("cls");
    }
}