/****************************************Copyright (c)****************************************************
**--------------File Info---------------------------------------------------------------------------------
** File name:              led_test.c
** Latest modified Date:    2019-3-14	
** Latest Version:          
** Descriptions:            ����led����
**--------------------------------------------------------------------------------------------------------
** Created by:             �Ź�ӫ
** Created date:            2019-3-14	
** Version:                 
** Descriptions:            ��ʾһЩ�ַ�
**--------------------------------------------------------------------------------------------------------
*********************************************************************************************************/

#include"led_display.h"

int main(){
	char *str="EBY.583";
	led_display_puts(str);
	//LED_SEG_DATA(led_show_buf[0]);
	while(1){
		led_display_scan();
		delay(600);
	}
	return 0;

}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/

