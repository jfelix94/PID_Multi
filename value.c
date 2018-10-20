#include "value.h"

int timerMulti, timer1, timer2;
float e1, ie1, referencia1, Kp1, Kd1, Ki1, Kd1, y;
float e2, ie2, referencia2, Kp2, Kd2, Ki2, Kd2;

void Init_valores(void){
    Kp1 = 3;
    Kd1 = 0;
    Ki1 = 6;
    e1 = 0;
    ie1 = 0;
    referencia1 = 2250;

    Kp2 = 0;
    Kd2 = 0;
    Ki2 = -3;
    e2 = 0;
    ie2 = 0;
    referencia2 = 1500;
    timerMulti = 50;
    timer1 = 50;
    timer2 = 50;
}

void Init_valores1(void){
    Kp1 = 3;
    Kd1 = 0;
    Ki1 = 6;
    e1 = 0;
    ie1 = 0;
    referencia1 = 5000;

    timer1 = 50;
}

void Init_valores2(void){
    Kp2 = 3;
    Kd2 = 0;
    Ki2 = 6;
    e2 = 0;
    ie2 = 0;
    referencia2 = 10000;

    timer2 = 50;
}

void Altera_timerMulti(int a){
    if(a>=0){
       timerMulti=a;
    }
}

void Altera_timer1(int a){
    if(a>=0){
       timer1=a;
    }
}

void Altera_timer2(int a){
    if(a>=0){
       timer2=a;
    }
}

void Altera_ie1(float a){
    ie1 = a;
    return 0;
}

void Altera_y(float a){
    y = a;
    return 0;
}

void Altera_e1(float a){
    e1 = a;
    return 0;
}

void Altera_Kp1(float a){
    Kp1 = a;
    return 0;
}

void Altera_Ki1(float a){
    Ki1 = a;
    return 0;
}

void Altera_Kd1(float a){
    Kd1 = a;
    return 0;
}

void Altera_ref1(float a){
    if(a >= 0){
        if(a<=16383){
            referencia1 = a;
        }
    }
    return 0;
}

//-------------------------------------

void Altera_ie2(float a){
    ie2 = a;
    return 0;
}

void Altera_e2(float a){
    e2 = a;
    return 0;
}

void Altera_Kp2(float a){
    Kp2 = a;
    return 0;
}

void Altera_Ki2(float a){
    Ki2 = a;
    return 0;
}

void Altera_Kd2(float a){
    Kd2 = a;
    return 0;
}

void Altera_ref2(float a){
    if(a >= 0){
        if(a<=16383){
            referencia2 = a;
        }
    }
    return 0;
}

//-------------------------

int Retorna_timerMulti(void){
    return timerMulti;
}

int Retorna_timer1(void){
    return timer1;
}

int Retorna_timer2(void){
    return timer2;
}

float Retorna_Kp1(void){
    return Kp1;
}

float Retorna_Ki1(void){
    return Ki1;
}

float Retorna_Kd1(void){
    return Kd1;
}

float Retorna_ref1(void){
    return referencia1;
}

float Retorna_e1(void){
    return e1;
}

float Retorna_y(void){
    return y;
}

float Retorna_ie1(void){
    return ie1;
}

//------------------------

float Retorna_Kp2(void){
    return Kp2;
}

float Retorna_Ki2(void){
    return Ki2;
}

float Retorna_Kd2(void){
    return Kd2;
}

float Retorna_ref2(void){
    return referencia2;
}

float Retorna_e2(void){
    return e2;
}

float Retorna_ie2(void){
    return ie2;
}



