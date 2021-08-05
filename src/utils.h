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

#ifndef UTILS_H
#define UTILS_H

#define LED_RED   (0x01)
#define LED_GREEN (0x02)
#define LED_BLUE  (0x04)
#define LED_ALL   (0x07)


void set_leds(uint32_t leds, uint32_t level);


#define RED_ON_ERROR(ret, func_name)  do { \
    if ((ret) != FSP_SUCCESS) { \
        SEGGER_RTT_printf(0, "%s failed! error: 0x%08x \r\n", func_name, (ret)); \
        set_leds(LED_RED, 1); \
        while(1); \
    } \
} while (0)

#endif /* UTILS_H */
