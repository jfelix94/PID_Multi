/*
 * value.h
 *
 *  Created on: 23 de jul de 2018
 *      Author: jfeli
 */

#ifndef VALUE_H_
#define VALUE_H_

        void Init_valores(void);
        void Init_valores1(void);
        void Init_valores2(void);
        void Altera_e1(float a);
        void Altera_ie1(float a);
        void Altera_timerMulti(int a);
        void Altera_timer1(int a);
        void Altera_timer2(int a);
        void Altera_Kp1(float a);
        void Altera_Kd1(float a);
        void Altera_Ki1(float a);
        void Altera_ref1(float a);
        void Altera_y(float a);

        void Altera_e2(float a);
        void Altera_ie2(float a);
        void Altera_Kp2(float a);
        void Altera_Kd2(float a);
        void Altera_Ki2(float a);
        void Altera_ref2(float a);

        float Retorna_Kd1(void);
        float Retorna_Ki1(void);
        float Retorna_Kp1(void);
        int   Retorna_timerMulti(void);
        int   Retorna_timer1(void);
        int   Retorna_timer2(void);
        float Retorna_ref1(void);
        float Retorna_e1(void);
        float Retorna_ie1(void);
        float Retorna_y(void);

        float Retorna_Kd2(void);
        float Retorna_Ki2(void);
        float Retorna_Kp2(void);
        float Retorna_ref2(void);
        float Retorna_e2(void);
        float Retorna_ie2(void);

#endif /* VALUE_H_ */
