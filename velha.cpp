/**
 * \file  velha.cpp
 */


#include "velha.hpp"
#include <iostream>
using namespace std;

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

/*! Funcao principal do programa */
int VerificaVelha( int velha[3][3] )
{
	if((Vence(velha,1) && Vence(velha,2)) || confereNum(velha)){
		return -2;
	}
	// Verifica se o X venceu 
	else if(Vence(velha,1)){
		return 1;
	}
	//Verifica se o O venceu 
	else if(Vence(velha,2)){
		return 1;
	}
	// Caso para jogo empatado
	else if(!Vence(velha,1) && !Vence(velha,2) && !Zero(velha)){
		return 0; 
	}
	return -1;
}
/*! Funcao usada para verificar e retornar se X ou O venceu */
int Vence(int velha[3][3], int numero){
	if(velha[0][0] == numero && velha[1][1] == numero && velha[2][2] == numero){
		return 1;
	}
	else if(velha[0][2] == numero && velha[1][1] == numero && velha[2][0] == numero){
		return 1;
	}
	else if(velha[0][0] == numero && velha[1][0] == numero && velha[2][0] == numero){
		return 1;
	}
	else if(velha[0][1] == numero && velha[1][1] == numero && velha[2][1] == numero){
		return 1;
	}
	else if(velha[0][2] == numero && velha[1][2] == numero && velha[2][2] == numero){
		return 1;
	}
	else if(velha[0][0] == numero && velha[0][1] == numero && velha[0][2] == numero){
		return 1;
	}
	else if(velha[1][0] == numero && velha[1][1] == numero && velha[1][2] == numero){
		return 1;
	}
	else if(velha[2][0] == numero && velha[2][1] == numero && velha[2][2] == numero){
		return 1;
	}
	else{
		return 0;
	}
}
///
/// Função usada para conferir se há algun zero na matriz 
///
int Zero(int velha[3][3]){
	for(int x = 0; x<3;x++){
		for(int y = 0; y<3;y++){
			if(!velha[x][y]){
				return 1;
			}
		}
	}
	return 0;
}
///
/// Função usada para conferir se a quantidade de um dos simbolos é muito maior que a do outro
///
int confereNum(int velha[3][3]){
	int um = 0;
	int dois = 0;
	for(int x = 0; x<3;x++){
		for(int y = 0; y<3;y++){
			if(velha[x][y] == 1) 
			{
				um++;
			}
			else if(velha[x][y] == 2)
			{
				dois++;
			}
		}
	}
	if(um + 1 < dois || dois + 1 < um ){
		return 1;
	}
	else
	{
		return 0;
	}
}


