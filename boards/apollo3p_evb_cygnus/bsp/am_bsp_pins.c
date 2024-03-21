//*****************************************************************************
//
//  am_bsp_pins.c
//! @file
//!
//! @brief BSP pin configuration definitions.
//!
//! @addtogroup BSP Board Support Package (BSP)
//! @ingroup BSP
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
// Copyright (c) 2023, Ambiq Micro, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
//
// Third party software included in this distribution is subject to the
// additional license terms as defined in the /docs/licenses directory.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// This is part of revision release_sdk_3_1_1-10cda4b5e0 of the AmbiqSuite Development Package.
//
//*****************************************************************************

#include "am_bsp.h"

//*****************************************************************************
//
//  BUTTON0 pin: Labeled BTN2 on the Apollo3 Blue Plus EVB.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_BUTTON0 =
{
    .uFuncSel            = AM_HAL_PIN_16_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  BUTTON1 pin: Labeled BTN3 on the Apollo3 Blue Plus EVB.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_BUTTON1 =
{
    .uFuncSel            = AM_HAL_PIN_18_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  BUTTON2 pin: Labeled BTN4 on the Apollo3 Blue Plus EVB.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_BUTTON2 =
{
    .uFuncSel            = AM_HAL_PIN_19_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  LED0 pin: The LED nearest the end of the board.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_LED0 =
{
    .uFuncSel            = AM_HAL_PIN_10_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  LED1 pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_LED1 =
{
    .uFuncSel            = AM_HAL_PIN_30_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  LED2 pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_LED2 =
{
    .uFuncSel            = AM_HAL_PIN_15_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  LED3 pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_LED3 =
{
    .uFuncSel            = AM_HAL_PIN_14_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  LED4 pin: The LED at the most interior location.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_LED4 =
{
    .uFuncSel            = AM_HAL_PIN_17_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  COM_UART_TX pin: This pin is the COM_UART transmit pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_COM_UART_TX =
{
    .uFuncSel            = AM_HAL_PIN_22_UART0TX,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  COM_UART_RX pin: This pin is the COM_UART receive pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_COM_UART_RX =
{
    .uFuncSel            = AM_HAL_PIN_23_UART0RX
};

//*****************************************************************************
//
//  COM_UART_CTS pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_COM_UART_CTS =
{
    .uFuncSel            = AM_HAL_PIN_38_UA0CTS
};

//*****************************************************************************
//
//  COM_UART_RTS pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_COM_UART_RTS =
{
    .uFuncSel            = AM_HAL_PIN_37_UA0RTS,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  IOM0_SCL pin: I/O Master 0 I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM0_SCL =
{
    .uFuncSel            = AM_HAL_PIN_5_M0SCL,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  IOM0_SDA pin: I/O Master 0 I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM0_SDA =
{
    .uFuncSel            = AM_HAL_PIN_6_M0SDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  IOM1_CS pin: I/O Master 1 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM1_CS =
{
    .uFuncSel            = AM_HAL_PIN_34_NCE34,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 1,
    .uNCE                = 2,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  IOM1_MISO pin: I/O Master 1 SPI MISO signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM1_MISO =
{
    .uFuncSel            = AM_HAL_PIN_9_M1MISO,
    .bIomMSPIn           = 1,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  IOM1_MOSI pin: I/O Master 1 SPI MOSI signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM1_MOSI =
{
    .uFuncSel            = AM_HAL_PIN_10_M1MOSI,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  IOM1_SCK pin: I/O Master 1 SPI SCK signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM1_SCK =
{
    .uFuncSel            = AM_HAL_PIN_8_M1SCK,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  IOM1_SCL pin: I/O Master 1 I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM1_SCL =
{
    .uFuncSel            = AM_HAL_PIN_8_M1SCL,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  IOM1_SDA pin: I/O Master 1 I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM1_SDA =
{
    .uFuncSel            = AM_HAL_PIN_9_M1SDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FT_BRIDGE_SCK pin: FT_BRIDGE I/O Master 2 SPI clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FT_BRIDGE_SCK =
{
    .uFuncSel            = AM_HAL_PIN_27_M2SCK,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FT_BRIDGE_MOSI pin: FT_BRIDGE I/O Master 2 SPI MOSI signal. NOTE: pin shared with AMOLED QSPI CS on Cygnus.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FT_BRIDGE_MOSI =
{
    .uFuncSel            = AM_HAL_PIN_28_M2MOSI,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FT_BRIDGE_MISO pin: FT_BRIDGE I/O Master 2 SPI MISO signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FT_BRIDGE_MISO =
{
    .uFuncSel            = AM_HAL_PIN_25_M2MISO,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FT_BRIDGE_SS pin: FT_BRIDGE I/O Master 2 slave select.  IOM2 CE3 shared with the Cygnus board's FTDI device.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FT_BRIDGE_SS =
{
    .uFuncSel            = AM_HAL_PIN_15_NCE15,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2,
    .uNCE                = 3,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  IOM2_SCL pin: I/O Master 2 I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM2_SCL =
{
    .uFuncSel            = AM_HAL_PIN_27_M2SCL,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  IOM2_SDA pin: I/O Master 2 I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM2_SDA =
{
    .uFuncSel            = AM_HAL_PIN_25_M2SDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  IOM3_CS pin: I/O Master 3 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM3_CS =
{
    .uFuncSel            = AM_HAL_PIN_29_NCE29,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 3,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  IOM3_MISO pin: I/O Master 3 SPI MISO signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM3_MISO =
{
    .uFuncSel            = AM_HAL_PIN_43_M3MISO,
    .bIomMSPIn           = 1,
    .uIOMnum             = 3
};

//*****************************************************************************
//
//  IOM3_MOSI pin: I/O Master 3 SPI MOSI signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM3_MOSI =
{
    .uFuncSel            = AM_HAL_PIN_38_M3MOSI,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 3
};

//*****************************************************************************
//
//  IOM3_SCK pin: I/O Master 3 SPI SCK signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM3_SCK =
{
    .uFuncSel            = AM_HAL_PIN_42_M3SCK,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 3
};

//*****************************************************************************
//
//  IOM3_SCL pin: I/O Master 3 I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM3_SCL =
{
    .uFuncSel            = AM_HAL_PIN_42_M3SCL,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 3
};

//*****************************************************************************
//
//  IOM3_SDA pin: I/O Master 3 I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM3_SDA =
{
    .uFuncSel            = AM_HAL_PIN_43_M3SDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 3
};

//*****************************************************************************
//
//  IOM4_CS pin: I/O Master 4 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM4_CS =
{
    .uFuncSel            = AM_HAL_PIN_13_NCE13,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 4,
    .uNCE                = 1,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  IOM4_MISO pin: I/O Master 4 SPI MISO signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM4_MISO =
{
    .uFuncSel            = AM_HAL_PIN_40_M4MISO,
    .bIomMSPIn           = 1,
    .uIOMnum             = 4
};

//*****************************************************************************
//
//  IOM4_MOSI pin: I/O Master 4 SPI MOSI signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM4_MOSI =
{
    .uFuncSel            = AM_HAL_PIN_44_M4MOSI,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 4
};

//*****************************************************************************
//
//  IOM4_SCK pin: I/O Master 4 SPI SCK signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM4_SCK =
{
    .uFuncSel            = AM_HAL_PIN_39_M4SCK,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 4
};

//*****************************************************************************
//
//  IOM4_SCL pin: I/O Master 4 I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM4_SCL =
{
    .uFuncSel            = AM_HAL_PIN_39_M4SCL,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 4
};

//*****************************************************************************
//
//  IOM4_SDA pin: I/O Master 4 I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM4_SDA =
{
    .uFuncSel            = AM_HAL_PIN_40_M4SDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 4
};

//*****************************************************************************
//
//  IOM5_SCL pin: I/O Master 5 I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM5_SCL =
{
    .uFuncSel            = AM_HAL_PIN_48_M5SCL,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 5
};

//*****************************************************************************
//
//  IOM5_SDA pin: I/O Master 5 I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOM5_SDA =
{
    .uFuncSel            = AM_HAL_PIN_49_M5SDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 5
};

//*****************************************************************************
//
//  MSPI0_CE0 pin: MSPI0 chip select 0.  Note: CE1 must be disabled or tristated when using this pin for CE.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI0_CE0 =
{
    .uFuncSel            = AM_HAL_PIN_37_NCE37,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  MSPI0_CE1 pin: MSPI0 chip select 1.  Note: CE0 must be disabled or tristated when using this pin for CE.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI0_CE1 =
{
    .uFuncSel            = AM_HAL_PIN_12_NCE12,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  MSPI0_D0 pin: MSPI0 data 0.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI0_D0 =
{
    .uFuncSel            = AM_HAL_PIN_22_MSPI0_0,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  MSPI0_D1 pin: MSPI0 data 1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI0_D1 =
{
    .uFuncSel            = AM_HAL_PIN_26_MSPI0_1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  MSPI0_D2 pin: MSPI0 data 2.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI0_D2 =
{
    .uFuncSel            = AM_HAL_PIN_4_MSPI0_2,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  MSPI0_D3 pin: MSPI0 data 3.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI0_D3 =
{
    .uFuncSel            = AM_HAL_PIN_23_MSPI0_3,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  MSPI0_SCK pin: MSPI0 clock.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI0_SCK =
{
    .uFuncSel            = AM_HAL_PIN_24_MSPI0_8,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  MSPI1_CE0 pin: MSPI1 chip select 0.  Note: CE1 must be disabled or tristated when using this pin for CE.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_CE0 =
{
    .uFuncSel            = AM_HAL_PIN_50_NCE50,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  MSPI1_CE1 pin: MSPI1 chip select 1.  Note: CE0 must be disabled or tristated when using this pin for CE.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_CE1 =
{
    .uFuncSel            = AM_HAL_PIN_62_NCE62,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  MSPI1_D0 pin: MSPI1 data 0.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_D0 =
{
    .uFuncSel            = AM_HAL_PIN_51_MSPI1_0,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_D1 pin: MSPI1 data 1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_D1 =
{
    .uFuncSel            = AM_HAL_PIN_52_MSPI1_1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_D2 pin: MSPI1 data 2.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_D2 =
{
    .uFuncSel            = AM_HAL_PIN_53_MSPI1_2,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_D3 pin: MSPI1 data 3.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_D3 =
{
    .uFuncSel            = AM_HAL_PIN_54_MSPI1_3,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_D4 pin: MSPI1 data 4.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_D4 =
{
    .uFuncSel            = AM_HAL_PIN_55_MSPI1_4,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_D5 pin: MSPI1 data 5.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_D5 =
{
    .uFuncSel            = AM_HAL_PIN_56_MSPI1_5,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_D6 pin: MSPI1 data 6.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_D6 =
{
    .uFuncSel            = AM_HAL_PIN_57_MSPI1_6,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_D7 pin: MSPI1 data 7.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_D7 =
{
    .uFuncSel            = AM_HAL_PIN_58_MSPI1_7,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_SCK pin: MSPI1 clock.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_SCK =
{
    .uFuncSel            = AM_HAL_PIN_59_MSPI1_8,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI1_DMDQS pin: MSPI1 DDR Data Strobe.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI1_DMDQS =
{
    .uFuncSel            = AM_HAL_PIN_60_MSPI1_9,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI2_CE0 pin: MSPI2 chip select 0.  Note: CE2 must be disabled or tristated when using this pin for CE.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI2_CE0 =
{
    .uFuncSel            = AM_HAL_PIN_63_NCE63,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  MSPI2_CE1 pin: MSPI2 chip select 1.  Note: CE0 must be disabled or tristated when using this pin for CE.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI2_CE1 =
{
    .uFuncSel            = AM_HAL_PIN_61_NCE61,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  MSPI2_D0 pin: MSPI2 data 0.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI2_D0 =
{
    .uFuncSel            = AM_HAL_PIN_64_MSPI2_0,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  MSPI2_D1 pin: MSPI2 data 1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI2_D1 =
{
    .uFuncSel            = AM_HAL_PIN_65_MSPI2_1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  MSPI2_D2 pin: MSPI2 data 2.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI2_D2 =
{
    .uFuncSel            = AM_HAL_PIN_66_MSPI2_2,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  MSPI2_D3 pin: MSPI2 data 3.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI2_D3 =
{
    .uFuncSel            = AM_HAL_PIN_67_MSPI2_3,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  MSPI2_SCK pin: MSPI2 clock.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI2_SCK =
{
    .uFuncSel            = AM_HAL_PIN_68_MSPI2_4,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  IOS_CE pin: I/O Slave chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOS_CE =
{
    .uFuncSel            = AM_HAL_PIN_3_SLnCE,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  IOS_MISO pin: I/O Slave SPI MISO signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOS_MISO =
{
    .uFuncSel            = AM_HAL_PIN_2_SLMISO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA
};

//*****************************************************************************
//
//  IOS_MOSI pin: I/O Slave SPI MOSI signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOS_MOSI =
{
    .uFuncSel            = AM_HAL_PIN_1_SLMOSI,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  IOS_SCK pin: I/O Slave SPI SCK signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOS_SCK =
{
    .uFuncSel            = AM_HAL_PIN_0_SLSCK,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  IOS_SCL pin: I/O Slave I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOS_SCL =
{
    .uFuncSel            = AM_HAL_PIN_0_SLSCL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  IOS_SDA pin: I/O Slave I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_IOS_SDA =
{
    .uFuncSel            = AM_HAL_PIN_1_SLSDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN
};

//*****************************************************************************
//
//  ITM_SWO pin: ITM Serial Wire Output.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_ITM_SWO =
{
    .uFuncSel            = AM_HAL_PIN_41_SWO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  SWDCK pin: Cortex Serial Wire DCK.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_SWDCK =
{
    .uFuncSel            = AM_HAL_PIN_20_SWDCK
};

//*****************************************************************************
//
//  SWDIO pin: Cortex Serial Wire DIO.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_SWDIO =
{
    .uFuncSel            = AM_HAL_PIN_21_SWDIO
};

//*****************************************************************************
//
//  DMIC0_PDMD pin: DMIC Data (input).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DMIC0_PDMD =
{
    .uFuncSel            = AM_HAL_PIN_36_PDMDATA,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  DMIC0_PDMC pin: DMIC PDM CLK (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DMIC0_PDMC =
{
    .uFuncSel            = AM_HAL_PIN_37_PDMCLK,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  AMIC0_DOUT pin: Analog Mic 0 (AMIC0) digital output for Wake on Sound trigger from analog mic.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_AMIC0_DOUT =
{
    .uFuncSel            = AM_HAL_PIN_0_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  AMIC0_MODE pin: Analog Mic 0 (AMIC0) Mode Select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_AMIC0_MODE =
{
    .uFuncSel            = AM_HAL_PIN_1_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  AMIC1_DOUT pin: Analog Mic 1 (AMIC1) digital output for Wake on Sound trigger from analog mic.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_AMIC1_DOUT =
{
    .uFuncSel            = AM_HAL_PIN_2_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  AMIC1_MODE pin: Analog Mic 1 (AMIC1) Mode Select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_AMIC1_MODE =
{
    .uFuncSel            = AM_HAL_PIN_3_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  PGA0_POT_CS pin: PGA0 POT I/O Master 5 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PGA0_POT_CS =
{
    .uFuncSel            = AM_HAL_PIN_12_NCE12,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 5,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  PGA1_POT_CS pin: PGA1 POT I/O Master 5 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PGA1_POT_CS =
{
    .uFuncSel            = AM_HAL_PIN_29_NCE29,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 5,
    .uNCE                = 2,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  PGA_POTS_CLK pin: PGA0 and PGA1 POTs I/O Master 5 SPI clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PGA_POTS_CLK =
{
    .uFuncSel            = AM_HAL_PIN_48_M5SCK,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 5
};

//*****************************************************************************
//
//  PGA_POTS_SDI pin: PGA0 and PGA1 POTs Data in on I/O Master 5 SPI MOSI signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PGA_POTS_SDI =
{
    .uFuncSel            = AM_HAL_PIN_47_M5MOSI,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 5
};

//*****************************************************************************
//
//  PGA0_OUT pin: PGA0 output signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PGA0_OUT =
{
    .uFuncSel            = AM_HAL_PIN_32_ADCSE4,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  PGA1_OUT pin: PGA1 output signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PGA1_OUT =
{
    .uFuncSel            = AM_HAL_PIN_35_ADCSE7,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  DSPL_RESET pin: Display reset control (output). Used by both displays.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL_RESET =
{
    .uFuncSel            = AM_HAL_PIN_11_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL
};

//*****************************************************************************
//
//  DSPL_TE pin: Display TE signal (input). Used by both displays.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL_TE =
{
    .uFuncSel            = AM_HAL_PIN_38_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI
};

//*****************************************************************************
//
//  DSPL0_CE0 pin: Display DSPL0 I/F using MSPI0 chip select 0  (output). NOTE: MSPI0_CE1 defined elsewhere must be disabled or tristated when using this pin for CE. NOTE: pin shared with FT_BRIDGE MOSI on Cygnus.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_CE0 =
{
    .uFuncSel            = AM_HAL_PIN_28_NCE28,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  DSPL0_D0 pin: Display DSPL0 I/F MSPI0 data 0.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_D0 =
{
    .uFuncSel            = AM_HAL_PIN_22_MSPI0_0,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  DSPL0_D1 pin: Display DSPL0 I/F MSPI0 data 1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_D1 =
{
    .uFuncSel            = AM_HAL_PIN_26_MSPI0_1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  DSPL0_D2 pin: Display DSPL0 I/F MSPI0 data 2.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_D2 =
{
    .uFuncSel            = AM_HAL_PIN_4_MSPI0_2,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  DSPL0_D3 pin: Display DSPL0 I/F MSPI0 data 3.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_D3 =
{
    .uFuncSel            = AM_HAL_PIN_23_MSPI0_3,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  DSPL0_SCK pin: Display DSPL0 I/F MSPI0 clock (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_SCK =
{
    .uFuncSel            = AM_HAL_PIN_24_MSPI0_8,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  DSPL0_OLED_EN pin: Display DSPL0 OLED enable (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_OLED_EN =
{
    .uFuncSel            = AM_HAL_PIN_49_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL
};

//*****************************************************************************
//
//  DSPL0_VIO_EN pin: Display DSPL0 VIO enable (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_VIO_EN =
{
    .uFuncSel            = AM_HAL_PIN_40_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL
};

//*****************************************************************************
//
//  DSPL0_DSPL_3V3_EN pin: Display DSPL0 3.3V enable (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_DSPL_3V3_EN =
{
    .uFuncSel            = AM_HAL_PIN_31_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL
};

//*****************************************************************************
//
//  DSPL0_OLED_PWER_EN pin: DSPL0 Display OLED power enable (output).  Shared with AMOLED_SPI_DCX.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL0_OLED_PWER_EN =
{
    .uFuncSel            = AM_HAL_PIN_39_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL
};

//*****************************************************************************
//
//  DSPL1_DCX pin: Display DSPL1 Data/Command select (output).  Shared with AMOLED_QSPI_OLED_EN.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL1_DCX =
{
    .uFuncSel            = AM_HAL_PIN_49_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL
};

//*****************************************************************************
//
//  DSPL1_DSPL_2V8_EN pin: Display DSPL1 2.8V enable (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL1_DSPL_2V8_EN =
{
    .uFuncSel            = AM_HAL_PIN_45_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL
};

//*****************************************************************************
//
//  DSPL1_CS pin: Display DSPL1 I/O Master 0 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL1_CS =
{
    .uFuncSel            = AM_HAL_PIN_13_NCE13,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0,
    .uNCE                = 1,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  DSPL1_SCL pin: Display DSPL1 I/O Master 0 SPI clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL1_SCL =
{
    .uFuncSel            = AM_HAL_PIN_5_M0SCK,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  DSPL1_SDI pin: Display DSPL1 I/O Master 0 SPI data in (MOSI) signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL1_SDI =
{
    .uFuncSel            = AM_HAL_PIN_7_M0MOSI,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  DSPL1_SDO pin: Display DSPL1 I/O Master 0 SPI data out (MISO) signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_DSPL1_SDO =
{
    .uFuncSel            = AM_HAL_PIN_6_M0MISO,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  BNO055_UART_TX pin: This pin is the UART transmit pin for the BNO055.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_BNO055_UART_TX =
{
    .uFuncSel            = AM_HAL_PIN_9_UART1RX,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  BNO055_UART_RX pin: This pin is the UART receive pin for the BNO055.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_BNO055_UART_RX =
{
    .uFuncSel            = AM_HAL_PIN_8_UART1TX
};

//*****************************************************************************
//
//  BNO055_INTERRUPT pin: This pin is the interrupt input from the BNO055.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_BNO055_INTERRUPT =
{
    .uFuncSel            = AM_HAL_PIN_46_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI
};

//*****************************************************************************
//
//  CYG_FT_BRIDGE_SCK pin: FT_BRIDGE I/O Master 2 SPI clock signal on Cygnus.  NOTE: pin shared with the EVB's FTDI device.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CYG_FT_BRIDGE_SCK =
{
    .uFuncSel            = AM_HAL_PIN_27_M2SCK,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  CYG_FT_BRIDGE_MOSI pin: FT_BRIDGE I/O Master 2 SPI MOSI signal on Cygnus. NOTE: pin shared with AMOLED QSPI CS on Cygnus, and with the EVB's FTDI device.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CYG_FT_BRIDGE_MOSI =
{
    .uFuncSel            = AM_HAL_PIN_28_M2MOSI,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  CYG_FT_BRIDGE_MISO pin: FT_BRIDGE I/O Master 2 SPI MISO signal on Cygnus.  NOTE: pin shared with the EVB's FTDI device.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CYG_FT_BRIDGE_MISO =
{
    .uFuncSel            = AM_HAL_PIN_25_M2MISO,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  CYG_FT_BRIDGE_SS pin: FT_BRIDGE I/O Master 2 slave select on Cygnus.  NOTE: different pin but same CE as is used on EVB's FTDI device.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CYG_FT_BRIDGE_SS =
{
    .uFuncSel            = AM_HAL_PIN_34_NCE34,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 2,
    .uNCE                = 3,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  PS_FRAM_SCL pin: Pressure Sensor and FRAM I/O Master 3 I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PS_FRAM_SCL =
{
    .uFuncSel            = AM_HAL_PIN_42_M3SCL,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 3
};

//*****************************************************************************
//
//  PS_FRAM_SDA pin: Pressure Sensor and FRAM I/O Master 3 I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PS_FRAM_SDA =
{
    .uFuncSel            = AM_HAL_PIN_43_M3SDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 3
};

//*****************************************************************************
//
//  PSRAM_CE0 pin: PSRAM I/F using MSPI1 chip select 0  (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PSRAM_CE0 =
{
    .uFuncSel            = AM_HAL_PIN_69_NCE69,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  PSRAM_D0 pin: PSRAM I/F MSPI1 data 0. Pin shared with FLASH1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PSRAM_D0 =
{
    .uFuncSel            = AM_HAL_PIN_51_MSPI1_0,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  PSRAM_D1 pin: PSRAM I/F MSPI1 data 1. Pin shared with FLASH1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PSRAM_D1 =
{
    .uFuncSel            = AM_HAL_PIN_52_MSPI1_1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  PSRAM_D2 pin: PSRAM I/F MSPI1 data 2. Pin shared with FLASH1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PSRAM_D2 =
{
    .uFuncSel            = AM_HAL_PIN_53_MSPI1_2,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  PSRAM_D3 pin: PSRAM I/F MSPI1 data 3. Pin shared with FLASH1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PSRAM_D3 =
{
    .uFuncSel            = AM_HAL_PIN_54_MSPI1_3,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  PSRAM_SCK pin: PSRAM I/F MSPI1 clock (output). Pin shared with FLASH1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_PSRAM_SCK =
{
    .uFuncSel            = AM_HAL_PIN_59_MSPI1_8,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FLASH0_CE0 pin: FLASH0 I/F using MSPI2 chip select 0  (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH0_CE0 =
{
    .uFuncSel            = AM_HAL_PIN_63_NCE63,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  FLASH0_D0 pin: FLASH0 I/F MSPI2 data 0.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH0_D0 =
{
    .uFuncSel            = AM_HAL_PIN_64_MSPI2_0,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FLASH0_D1 pin: FLASH0 I/F MSPI2 data 1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH0_D1 =
{
    .uFuncSel            = AM_HAL_PIN_65_MSPI2_1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FLASH0_D2 pin: FLASH0 I/F MSPI2 data 2.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH0_D2 =
{
    .uFuncSel            = AM_HAL_PIN_66_MSPI2_2,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FLASH0_D3 pin: FLASH0 I/F MSPI2 data 3.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH0_D3 =
{
    .uFuncSel            = AM_HAL_PIN_67_MSPI2_3,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FLASH0_SCK pin: FLASH0 I/F MSPI2 clock (output).  NOTE: Using MSPI2 D4 for CLK.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH0_SCK =
{
    .uFuncSel            = AM_HAL_PIN_68_MSPI2_4,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 2
};

//*****************************************************************************
//
//  FLASH1_CE0 pin: FLASH1 I/F using MSPI1 chip select 0  (output). Pin shared with PSRAM.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_CE0 =
{
    .uFuncSel            = AM_HAL_PIN_50_NCE50,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  FLASH1_D0 pin: FLASH1 I/F MSPI1 data 0. Pin shared with PSRAM.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_D0 =
{
    .uFuncSel            = AM_HAL_PIN_51_MSPI1_0,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_D1 pin: FLASH1 I/F MSPI1 data 1. Pin shared with PSRAM.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_D1 =
{
    .uFuncSel            = AM_HAL_PIN_52_MSPI1_1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_D2 pin: FLASH1 I/F MSPI1 data 2. Pin shared with PSRAM.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_D2 =
{
    .uFuncSel            = AM_HAL_PIN_53_MSPI1_2,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_D3 pin: FLASH1 I/F MSPI1 data 3. Pin shared with PSRAM.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_D3 =
{
    .uFuncSel            = AM_HAL_PIN_54_MSPI1_3,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_D4 pin: FLASH1 I/F MSPI1 data 4.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_D4 =
{
    .uFuncSel            = AM_HAL_PIN_55_MSPI1_4,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_D5 pin: FLASH1 I/F MSPI1 data 5.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_D5 =
{
    .uFuncSel            = AM_HAL_PIN_56_MSPI1_5,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_D6 pin: FLASH1 I/F MSPI1 data 6.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_D6 =
{
    .uFuncSel            = AM_HAL_PIN_57_MSPI1_6,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_D7 pin: FLASH1 I/F MSPI1 data 7.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_D7 =
{
    .uFuncSel            = AM_HAL_PIN_58_MSPI1_7,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_SCK pin: FLASH1 I/F MSPI1 clock (output). Pin shared with PSRAM.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_SCK =
{
    .uFuncSel            = AM_HAL_PIN_59_MSPI1_8,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH1_DS pin: FLASH1 I/F MSPI1 DS (output).
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH1_DS =
{
    .uFuncSel            = AM_HAL_PIN_60_MSPI1_9,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 0,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  FLASH2_SCK pin: FLASH2 I/O Master 0 SPI clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH2_SCK =
{
    .uFuncSel            = AM_HAL_PIN_5_M0SCK,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  FLASH2_MOSI pin: FLASH2 I/O Master 0 SPI MOSI signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH2_MOSI =
{
    .uFuncSel            = AM_HAL_PIN_7_M0MOSI,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  FLASH2_MISO pin: FLASH2 I/O Master 0 SPI MISO signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH2_MISO =
{
    .uFuncSel            = AM_HAL_PIN_6_M0MISO,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  FLASH2_CS pin: FLASH2 I/O Master 0 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_FLASH2_CS =
{
    .uFuncSel            = AM_HAL_PIN_33_NCE33,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .bIomMSPIn           = 1,
    .uIOMnum             = 0,
    .uNCE                = 2,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
// End Doxygen group.
//! @}
//
//*****************************************************************************
