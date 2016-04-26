//----------------------------------------------------------------------------
//    프로그램명 	: thread_nrf 관련 함수
//
//    만든이     	:
//
//    날  짜     	:
//    
//    최종 수정  	:
//
//    MPU_Type	:
//
//    파일명     	: thread_nrf.h
//----------------------------------------------------------------------------



//----- 헤더파일 열기
//
#define  THREAD_NRF_LOCAL

#include "thread_menu.h"
#include "mw.h"

#include "usb_lib.h"
#include "usb_pwr.h"




//-- 외부
//



//-- 내부 선언
//





//-- 내부 변수
//



//-- 내부 함수
//







/*---------------------------------------------------------------------------
     TITLE   : thread_menu
     WORK    : 
     ARG     : void
     RET     : void
---------------------------------------------------------------------------*/
void thread_nrf(void const *argument)
{
    (void) argument;
    uint8_t cmd;


    DEBUG_PRINT("Thread nrf\r\n");


    for (;;)
    {
        osDelay(1);
    }
}

