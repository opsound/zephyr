/*
 * Copyright (c) 2018 Christian Taedcke, Diego Sueiro
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Silabs EFR32MG MCU pin definitions.
 *
 * This file contains pin configuration data required by different MCU
 * modules to correctly configure GPIO controller.
 */

#ifndef _SOC_PINMAP_H_
#define _SOC_PINMAP_H_

#include <em_gpio.h>

/* Serial Wire Output (SWO) */
#if (DT_GPIO_GECKO_SWO_LOCATION == 0)
#define PIN_SWO {gpioPortF, 2, gpioModePushPull, 1}
#elif (DT_GPIO_GECKO_SWO_LOCATION == 1)
#define PIN_SWO {gpioPortB, 13, gpioModePushPull, 1}
#elif (DT_GPIO_GECKO_SWO_LOCATION == 2)
#define PIN_SWO {gpioPortD, 15, gpioModePushPull, 1}
#elif (DT_GPIO_GECKO_SWO_LOCATION == 3)
#define PIN_SWO {gpioPortC, 11, gpioModePushPull, 1}
#elif (DT_GPIO_GECKO_SWO_LOCATION >= 4)
#error ("Invalid SWO pin location")
#endif

#endif /* _SOC_PINMAP_H_ */
