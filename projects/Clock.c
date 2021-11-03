#include<stdio.h>
#include<windows.h>
int main(){   //main 
    int s,m,h; // integer values for seconds, minutes adn hours
    int d=1000;  // for delay 1000 milli seconds
    printf("Set The Inital Time :");
    scanf("%d%d%d", &s,&m,&h);  // input from the user set time
    if(h>24 || m>60 || s>60){    // if condition for not exced to maximum time
        printf("Fucking! Set the correct Time");  // error msg
        exit(0);
    }
    while(1){  //  while loop
        s++;
        if (s>59){    // if statment
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






