/*
 * button.h
 *
 *  Created on: 8 mars 2019
 *      Author: 17544488
 */

#ifndef BUTTON_H_
#define BUTTON_H_

void gipo_declare();
int Press_button1();

int Press_button2();

void clear_1(void);
void clear_2(void);

void clear_press1();
void clear_press2();
void conf_interrupt();
uint8_t Copy_state2();
uint8_t Copy_state1();
extern uint8_t	aInt;
extern uint8_t	bInt;

#endif /* BUTTON_H_ */
