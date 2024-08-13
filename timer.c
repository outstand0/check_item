#include "include.h"

uint8_t test_temp[8] = {0, };

void Debug_can()
{
    CAN2TxSendMsg(0x100, test_temp, 8);
}

if(++count_1 >=100)
{
    count_1s = 0;
    Debug_can();
    CanMuteTimeOut+;
}