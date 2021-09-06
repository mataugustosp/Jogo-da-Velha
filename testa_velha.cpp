
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
	WHEN(" X é o vencedor "){
		THEN("X ganha na vertical"){
			int teste1[3][3]= { { 2, 0, 1 }, 
	                      		{ 2, 0, 1 },
						  		{ 0, 2, 1 }
					  						};
    		REQUIRE( VerificaVelha(teste1) == 1 );
		}
		
	}
	
}

