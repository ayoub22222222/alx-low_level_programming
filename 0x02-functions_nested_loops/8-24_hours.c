#include "main.h"

/**
 * jack_bauer- prints every minute of the day
*/
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_puttchar((hr / 10) + 48);
			_puttchar((hr % 10) + 48);
			_putchar(':');
			_puttchar((min / 10) + 48);
			_puttchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
