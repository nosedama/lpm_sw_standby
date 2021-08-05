/*******************************************************************************
 *  _____       ______   ____
 * |_   _|     |  ____|/ ____|  Institute of Embedded Systems
 *   | |  _ __ | |__  | (___    Internet of Things Group
 *   | | | '_ \|  __|  \___ \   Zurich University of Applied Sciences
 *  _| |_| | | | |____ ____) |  8401 Winterthur, Switzerland
 * |_____|_| |_|______|_____/
 *
 *******************************************************************************
 *
 * Copyright (c) 2021, Institute Of Embedded Systems at Zurich University
 * of Applied Sciences. All rights reserved.
 *
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *****************************************************************************
 * \file        utils.h
 *
 * \description  Misc. utilies for LPM demo application.
 *
 *****************************************************************************/

#include "hal_data.h"
#include "utils.h"

void set_leds(uint32_t leds, uint32_t level) {
    bsp_io_level_t led_level = level ? BSP_IO_LEVEL_HIGH : BSP_IO_LEVEL_LOW;

    R_BSP_PinAccessEnable();
    if(leds & LED_RED)
    {
        R_BSP_PinWrite(BSP_IO_PORT_04_PIN_00, led_level);
    }
    if(leds & LED_GREEN)
    {
        R_BSP_PinWrite(BSP_IO_PORT_04_PIN_04, led_level);
    }
    if(leds & LED_BLUE)
    {
        R_BSP_PinWrite(BSP_IO_PORT_04_PIN_15, led_level);
    }
    R_BSP_PinAccessDisable();
}

