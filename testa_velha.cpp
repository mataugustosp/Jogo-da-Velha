
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  

// Test case 1 
TEST_CASE( "Jogo tem ganhador" ) {
	WHEN(" X é o vencedor "){
		THEN("X ganha na vertical"){
			int teste1[3][3]= { { 2, 0, 1 }, 
	                      		{ 2, 0, 1 },
						  		{ 0, 2, 1 }
					  						};
    		REQUIRE( VerificaVelha(teste1) == 1 );
		}
		THEN("X ganha na diagonal"){
			int teste1[3][3]= { { 1, 0, 0 }, 
	                      		{ 2, 1, 2 },
						  		{ 0, 2, 1 }
					  						};
    		REQUIRE( VerificaVelha(teste1) == 1 );
		}
		THEN("X ganha na horizontal"){
			int teste1[3][3]= { { 1, 1, 1 }, 
	                      		{ 2, 0, 2 },
						  		{ 0, 2, 0 }
					  						};
    		REQUIRE( VerificaVelha(teste1) == 1 );
		}
	}
	WHEN(" Y é o vencedor "){
		THEN("Y ganha na vertical"){
			int teste1[3][3]= { { 2, 0, 1 }, 
	                      		{ 2, 0, 1 },
						  		{ 2, 1, 0 }
					  						};
    		REQUIRE( VerificaVelha(teste1) == 1 );
		}
		THEN("Y ganha na diagonal"){
			int teste1[3][3]= { { 1, 0, 2}, 
	                      		{ 0, 2, 0 },
						  		{ 2, 1, 1 }
					  						};
    		REQUIRE( VerificaVelha(teste1) == 1 );
		}
		THEN("Y ganha na horizontal"){
			int teste1[3][3]= { { 2, 2, 2 }, 
	                      		{ 1, 0, 1 },
						  		{ 0, 1, 0 }
					  						};
    		REQUIRE( VerificaVelha(teste1) == 1 );
		}
	}
	
}
// Test case 2
// A regra para o jogo empatado é: O tabuleiro é completamente preenchido e nem o jogador 1, nem o jogador 2
//conseguem colocar as três marcas numa das configurações válidas. 
TEST_CASE( "Jogo empatado" ){
	int teste1[3][3]= { { 2, 1, 1 }, 
	                    { 1, 2, 2 },
						{ 2, 2, 1 }};
    REQUIRE( VerificaVelha(teste1) == 0 );
}

// Test case 3
// O jogo indefinido é aquele que ainda não está empatado e também ão tem nenhum vencedor 
TEST_CASE( "Jogo indefinido" ){
	int teste1[3][3]= { { 2, 0, 1 }, 
	                    { 0, 2, 2 },
						{ 2, 2, 0 }};
    REQUIRE( VerificaVelha(teste1) == -1 );
	int teste2[3][3]= { { 1, 0, 1 }, 
	                    { 2, 1, 2 },
						{ 2, 2, 0 }};
    REQUIRE( VerificaVelha(teste2) == -1 );
	int teste3[3][3]= { { 0, 0, 1 }, 
	                    { 0, 0, 0 },
						{ 0, 0, 0 }};
    REQUIRE( VerificaVelha(teste3) == -1 );
	int teste4[3][3]= { { 0, 0, 0 }, 
	                    { 0, 1, 0 },
						{ 2, 0, 0 }};
    REQUIRE( VerificaVelha(teste4) == -1 );
}
