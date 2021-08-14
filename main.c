#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "wifi.h"

int main(void)
{	
	delay_init();	    	 //��ʱ������ʼ��	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2
	uart_init(9600);	 //���ڳ�ʼ��Ϊ9600
	LED_Init();		  	 //��ʼ����LED���ӵ�Ӳ���ӿ� 
	wifi_protocol_init();
	while(1)
	{
		wifi_uart_service();
	}	 
}


