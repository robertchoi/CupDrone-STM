//----------------------------------------------------------------------------
//    프로그램명 	: thread_nrf 관련 함수 헤더
//
//    만든이     	:
//
//    날  짜     	:
//    
//    최종 수정  	:
//
//    MPU_Type 	:
//
//    파일명     	: thread_nrf.h
//----------------------------------------------------------------------------




                                                                                                 
#ifndef  _THREAD_NRF_H
#define  _THREAD_NRF_H



#include "thread_main.h"



#ifdef   THREAD_NRF_LOCAL
#define  EXT_THREAD_NRF_DEF
#else
#define  EXT_THREAD_NRF_DEF     extern
#endif


EXT_THREAD_NRF_DEF void thread_nrf(void const *argument);

#endif
                                                                                                 
                                                                                                 

