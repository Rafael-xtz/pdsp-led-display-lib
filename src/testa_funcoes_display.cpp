/*
 * =====================================================================================
 *
 *       Filename:  testa_funcoes_display.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/03/21 23:10:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "funcoes_display.h"

#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	Display_pdsp display_teste;

	display_teste.setDisplayBrightness(4);
	
	display_teste.outputCE();
	display_teste.outputWR();
	display_teste.outputFL();

	display_teste.outputADRESS();
	display_teste.outputDATA();


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
