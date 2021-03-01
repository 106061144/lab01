#include "mbed.h"

DigitalOut myled(LED3)
DigitalOut myled2(LED1)

int main(){
    while(1){
        int i = 0;
        for (i=0; i<5; i++){
            if (i<3){
                myled = 1;
                myled2 = 0;
                ThisThread::sleep_for(500ms);
            }
            else{
                myled = 0;
                myled2 = 1;
                ThisThread::sleep_for(500ms);                
            }
        }
    }
}