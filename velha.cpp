/**
 * \file  velha.cpp
 */


#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{
	// Verifica se o X venceu 
	if(Vence(velha,1)){
		return 1;
	}
	else if(Vence(velha,2)){
		return 1;
	}
	else{
		return 0; /*!< retorna zero para teste */
	}
}

/*!< Funcao usada para verificar e retornar se X ou O venceu */
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


