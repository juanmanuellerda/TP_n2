#include <stdint.h>
#include "bsp/bsp.h"
#include "imagenes/cielo1.h"
#include "imagenes/cielo2.h"
#include "imagenes/cielo3.h"
#include "imagenes/cielo4.h"
#include "imagenes/cielo5.h"
#include "imagenes/cielo6.h"
#include "imagenes/cielo7.h"
#include "imagenes/cielo8.h"
#include "imagenes/cielo9.h"
#include "imagenes/cielo10.h"
#include "imagenes/cielo11.h"
#include "imagenes/cielo12.h"
#include "imagenes/cielo13.h"
#include "imagenes/cielo14.h"
#include "imagenes/cielo15.h"
//#include "imagenes/cielo16.h"
//#include "imagenes/cielo17.h"
//#include "imagenes/cielo18.h"

#include "lib_draw.h"
#include "imagenes/nave0.h"
#include "imagenes/nave1.h"
#include "imagenes/nave_der0.h"
#include "imagenes/nave_der1.h"
#include "imagenes/nave_izq0.h"
#include "imagenes/nave_izq1.h"



int main(void) {
	uint8_t posx = 142, posy = 100, derecha = 0, izquierda = 0;
	uint32_t nave = 0;
	uint8_t cielos = 0;

	bsp_init();

	while (1) {


		if (cielos > 14) {
			cielos = 0;
		}
		else {
			cielos++;
		}

		switch(cielos)
		      {
		        case 0:
				VGA_DrawImage(&fondo_cielo15, 0, 0);
				break;

		        case 1:
				VGA_DrawImage(&fondo_cielo14, 0, 0);
				break;

		        case 2:
				VGA_DrawImage(&fondo_cielo13, 0, 0);
				break;

		        case 3:
				VGA_DrawImage(&fondo_cielo12, 0, 0);
				break;

				case 4:
				VGA_DrawImage(&fondo_cielo11, 0, 0);
				break;

				case 5:
				VGA_DrawImage(&fondo_cielo10, 0, 0);
				break;

				case 6:
				VGA_DrawImage(&fondo_cielo9, 0, 0);
				break;

				case 7:
				VGA_DrawImage(&fondo_cielo8, 0, 0);
				break;

				case 8:
				VGA_DrawImage(&fondo_cielo7, 0, 0);
				break;

				case 9:
				VGA_DrawImage(&fondo_cielo6, 0, 0);
				break;

				case 10:
				VGA_DrawImage(&fondo_cielo5, 0, 0);
				break;

				case 11:
				VGA_DrawImage(&fondo_cielo4, 0, 0);
				break;

				case 12:
				VGA_DrawImage(&fondo_cielo3, 0, 0);
				break;

				case 13:
				VGA_DrawImage(&fondo_cielo2, 0, 0);
				break;

				case 14:
				VGA_DrawImage(&fondo_cielo1, 0, 0);
				break;

				/*case 15:
				VGA_DrawImage(&fondo_cielo16, 0, 0); me quede sin memoria para cerrar la secuencia de imagenes
				break;

				case 16:
				VGA_DrawImage(&fondo_cielo17, 0, 0);
				break;

				case 17:
				VGA_DrawImage(&fondo_cielo18, 0, 0);
				break;*/
		      	}


		if ((derecha == 0) && (izquierda == 0)) {
					if (nave++ % 8 > 3) {
					VGA_DrawImageAlpha(&nave1, posx, posy, 0x1C);
					}
					else {
					VGA_DrawImageAlpha(&nave0, posx, posy, 0x1C);
					}
		}

		else {
			if(derecha == 1) {
				if (nave++ % 8 > 3) {
				VGA_DrawImageAlpha(&nave_izq1, posx, posy, 0x1C);
				}
				else {
				VGA_DrawImageAlpha(&nave_izq0, posx, posy, 0x1C);
				}
			}

			if (izquierda == 1) {
				if (nave++ % 8 > 3) {
				VGA_DrawImageAlpha(&nave_der0, posx, posy, 0x1C);
				}
				else {
				VGA_DrawImageAlpha(&nave_der1, posx, posy, 0x1C);
				}
			}
		}



		derecha = 0;
		izquierda = 0;

		if(!get_sw_state(SW_RIGHT)) {
		posx++;
		izquierda = 1;
		}

		if(!get_sw_state(SW_LEFT)) {
		posx--;
		derecha = 1;
		}

		if(get_sw_state(SW_DOWN))
		posy++;

		if(get_sw_state(SW_UP))
		posy--;

		bsp_draw();


	}
}
