//**********************************************************************************
//  Copyright 2016, 2017, 2022, 2023, 2024 Paul Chote, All Rights Reserved
//**********************************************************************************

#include <stdbool.h>
#include <stdint.h>
#include "gpio.h"

#ifndef COVERS_USB_H
#define COVERS_USB_H

void usb_initialize(gpin_t *usb_conn_led, gpin_t *usb_rx_led, gpin_t *usb_tx_led);
bool usb_can_read(void);
int16_t usb_read(void);
void usb_write(uint8_t b);
void usb_write_data(void *buf, uint16_t len);
#endif
