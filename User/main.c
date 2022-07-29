#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "PWM.h"

int main()
{
	OLED_Init();
	PWM_Init();
	//OLED_ShowString(1, 3, "Hello World!");
	while(1)
	{
		int i;
//		PWM_SetCompare(100);
		for(i=0; i < 100; i++)
		{
			PWM_SetCompare(i);
			Delay_ms(10);
		}
		for(i=100; i > 0; i--)
		{
			PWM_SetCompare(i);
			Delay_ms(10);
		}
	}
}
