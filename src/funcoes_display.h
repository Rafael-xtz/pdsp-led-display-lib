/*
 * =====================================================================================
 *
 *       Filename:  funcoes_display.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/03/21 21:15:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _DISPLAY_PDSP
#define _DISPLAY_PDSP
#include <cstdio>

class Display_pdsp{
	private:
		bool FL;

		bool A0;
		bool A1;
		bool A2;
		bool A3;

		bool CE;
		bool WR;

		bool D0;
		bool D1;
		bool D2;
		bool D3;
		bool D4;
		bool D5;
		bool D6;
		bool D7;

	public:
		Display_pdsp();
		~Display_pdsp();
		void setFL(bool fl);
		void setADRESS(bool a3, bool a2, bool a1, bool a0);
		void setCE(bool ce);
		void setWR(bool wr);
		void setDATA(bool d7, bool d6, bool d5, bool d4, bool d3, bool d2, bool d1, bool d0);

		void outputFL();
		void outputADRESS();
		void outputCE();
		void outputWR();
		void outputDATA();

		void setDisplayBrightness(int brightness);

};
#endif
