#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int numberPlayers = 2;
    int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel, smithy, village, baron, great_hall};
    int seed = 1000;
    struct gameState G;
    int randomSeed = 25;
    int newGame;
    
    printf("Testing correctness of initializeGame():\n");
    memset(&G, 23, sizeof(struct gameState));
    printf("Testing if G memory has been reset\n");
    if (&G == NULL) {
        printf("test passes\n");
    } else {
        printf("test failed \n");
    }
    newGame = initializeGame(numberPlayers, kCards, seed, &G);
    printf("testing to see if game initializes\n");
    if (&G) {
        printf("test passed\n");
    }else{
        printf("test failed\n");
    }
    
    
    //putSeed((long)randomSeed);
    
    if (G.numPlayers == numberPlayers) {
        printf("tested passed");
    }else {
        printf("test failed \n");
    }
    return 0;
}
