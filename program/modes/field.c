/*  Benjamin DELPY `gentilkiwi`
    https://blog.gentilkiwi.com
    benjamin@gentilkiwi.com
    Licence : https://creativecommons.org/licenses/by/4.0/
*/
#include "field.h"

void MODE_field()
{
    uint8_t reg, prev = 8, i;

    LEDS_SLOTS_Bitmask(0b00000000);

    TRF7970A_SPI_Write_SingleRegister(TRF79X0_CHIP_STATUS_CTRL_REG, TRF79X0_STATUS_CTRL_RECEIVER_ON);
    __no_operation();
    __no_operation();

    IRQ_Global &= ~IRQ_SOURCE_SW1;
    do
    {
        TRF7970A_SPI_DirectCommand(TRF79X0_TEST_EXTERNAL_RF_CMD);
        TIMER_delay_Milliseconds(20);
        reg = TRF7970A_SPI_Read_SingleRegister(TRF79X0_RSSI_LEVEL_REG) & 0b111;
        if(UART_Enabled && (reg != prev))
        {
            printf("[");
            for(i = 1; i < 8; i++)
            {
                printf("%c", (i <= reg) ? '#' : ' ');
            }
            printf("] %hu" UART_NEWLINE, reg);
            prev = reg;
        }

        if(reg)
        {
            reg++;
        }
        LEDS_SLOTS_Bitmask(~(0b11111111 << reg));
    } while(!(IRQ_Global & IRQ_SOURCE_SW1));

    LED_Slot(FlashStoredData.CurrentSlot);
}
