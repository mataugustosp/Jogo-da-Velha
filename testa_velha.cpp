
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  

// Test case 1 
TEST_CASE( "Jogo tem ganhador" ) {
	WHEN(" X é o vencedor "){
		THEN("X ganha na coluna 3"){
			int teste1[3][3]= { { 2, 0, 1 }, 
	                      		{ 2, 0, 1 },
						  		{ 0, 2, 1 }
					  						};
    		REQUIRE( VerificaVelha(teste1) == 1 );
		}
	}
}

