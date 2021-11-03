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
        if (s>59){    // if statment for seconds not exced to 60 count
            m++;   // minutes increment
            s=0;   // again seconds will zero
        }
        if(m>59){      // min not exced to 60 count
            h++;       // hours increment
            m=0;         // min will restart to zero
        }
        if(h>24){   // hours not exced to 24 hr's
            h=1;   // hours will restart
        }
        printf("\n Time right now :");   // print will be excuted 
        printf("%02d:%02d:%02d", s,m,h);   // Clock will display
        Sleep(d);        // sleep is delay to the counting
        system("cls");   // clear screen to updated values only displayed.
    }
}
 // have a nice day dear