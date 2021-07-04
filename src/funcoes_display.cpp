/*
 * =====================================================================================
 *
 *       Filename:  funcoes_display.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/02/21 00:23:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include        <cstdlib>
#include        <ctime>
#include	<utime.h>
#include	<unistd.h>
#include        <stdbool.h>
#include	<iostream>
#include	"funcoes_display.h"



using namespace std;
const int Tbw = 300000;
const int Tacc = 1300000;
const int Tas = 100000;
const int Tces = 0;
const int Tah = 200000;
const int Tceh = 0;
const int Tw =  1000000;
const int Tds = 50000;
const int Tdh = 200000;
const int Trc = 3000000;
const double Tclr = 3000;


Display_pdsp::Display_pdsp(){
	     }
Display_pdsp::~Display_pdsp(){
}
void Display_pdsp:: setFL(bool fl){
	this->FL = fl;
}
void Display_pdsp:: setADRESS(bool a3, bool a2, bool a1, bool a0){
	this-> A0 = a0;
	this-> A1 = a1;
	this-> A2 = a2; 
	this-> A3 = a3;
}
void Display_pdsp:: setCE(bool ce){
	this->CE = ce;
}

void Display_pdsp:: setWR(bool wr){
	this->WR = wr;
}
void Display_pdsp:: setDATA(bool d7, bool d6, bool d5, bool d4, bool d3, bool d2, bool d1, bool d0){
	this->D0 = d0;
	this->D1 = d1;
	this->D2 = d2;
	this->D3 = d3;
	this->D4 = d4;
	this->D5 = d5;
	this->D6 = d6;
	this->D7 = d7;
	
}

void Display_pdsp:: outputFL(){
	cout << "FL [" << FL <<"] ";
	cout << endl;


}
void Display_pdsp:: outputADRESS(){

	printf("%5s %5s %5s %5s\n", "A3", "A2", "A1", "A0");
	printf("%5d %5d %5d %5d\n", A3, A2, A1, A0);
//	cout << " A3 [" << A3<< "] ";
//	cout << " A2 [" << A2 << "] ";
//	cout << " A1 [" << A1 << "] ";
//	cout << " A0 [" << A0 << "] " ;
//	cout << endl;

}
void Display_pdsp:: outputCE(){
	cout << "CE ["<< CE << "] ";
	cout << endl;

}
void Display_pdsp:: outputWR(){
	cout << "WR ["<< WR << "] ";
	cout << endl;
}

void Display_pdsp:: outputDATA(){
	printf("%5s %5s %5s %5s\n", "D7", "D6", "D5", "D4");
	printf("%5d %5d %5d %5d\n", D7, D6, D5, D4);
printf("%5s %5s %5s %5s\n", "D3", "D2", "D1", "D0");
	printf("%5d %5d %5d %5d\n", D3, D2, D1, D0);
//	cout << " D7 [" << D7<< "] ";
//	cout << " D6 [" << D6 << "] ";
//	cout << " D5 [" << D5 << "] ";
//	cout << " D4 [" << D4 << "] " ;
//	cout << endl;
//	cout << " D3 [" << D3<< "] ";
//	cout << " D2 [" << D2 << "] ";
//	cout << " D1 [" << D1 << "] ";
//	cout << " D0 [" << D0 << "] " ;

//cout << endl;


}

void Display_pdsp:: setDisplayBrightness(int brightness){

	// Setar A3 como false.
	setADRESS(false, false, false, false);

	setWR(false);
	setCE(false);
	setFL(false);

	switch (brightness) {
	case (1):
//100%
		setDATA(0,0,0,0,0,0,0,0);
		break;
	
	case (2):
//80%
	setDATA(0,0,0,0,0,0,0,1);
		break;
	case (3):
//53%
		setDATA(0,0,0,0,0,0,1,0);
		break;
	case (4):
//40%
		setDATA(0,0,0,0,0,0,1,1);
		break;
	case (5):
//27%
		setDATA(0,0,0,0,0,1,0,0);
		break;
	case (6):
//20%
		setDATA(0,0,0,0,0,1,0,1);
		break;
	case (7):
//13%
		setDATA(0,0,0,0,0,1,1,0);
		break;
	case (8):
//0%
		setDATA(0,0,0,0,0,1,1,1);
		break;
	
	}
// Temporização para mudancas de status


	outputFL();
	outputDATA();
	usleep(Tces);
	outputCE();
	usleep(Tas);
	outputWR();
	usleep(Tdh);
	outputDATA();


}




