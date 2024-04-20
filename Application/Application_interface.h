/*
 * Application_interface.h
 *
 *  Created on: Apr 4, 2024
 *      Author: M0rE
 */

#ifndef APPLICATION_APPLICATION_INTERFACE_H_
#define APPLICATION_APPLICATION_INTERFACE_H_

#include "stdint.h"
#include "stdbool.h"
#include "WHEELS/Wheels_Interface.h"
#define THERSHOLD1      10
#define THERSHOLD2      20
#define MAX_RANGE       45
#define SPEED_RANGE     10
#define MIN_SPEED       10
#define NOK             0
#define OK              1




typedef enum
{
    Vehicle_Stop_Mode,
    Vehicle_Driver_Mode,
    Vehicle_Cruise_Control_Mode,
    Vehilce_Auto_Parking_Mode
} VehicleMode_t;

typedef enum
{
    LED_Stop, LED_Full, LED_BlinkFast, LED_BlindMid, LED_BlindSlow
} BlinlingLED_t;

typedef enum
{
    Speed_Increase, Speed_Decrease, Speed_Sustain, Speed_stop
} Speed_State_t;

static VehicleMode_t VehicleMode_obj = Vehicle_Stop_Mode;

void Update_Vehicle_Mode(void);
/* Obstacle Detection Function  params distance in CM return Speed State */

/* Cruise Control shared resource Speed State  update speed state  return NON */

void Check_Frontal_Sensor(void);

void Initiate_AutoParking_Mode(void);

void itoa(uint32_t n, uint8_t s[]);

Speed_State_t Update_Frontal_POV (uint32_t distance);

void Preform_Action(Speed_State_t Speed_state);

#endif /* APPLICATION_APPLICATION_INTERFACE_H_ */
