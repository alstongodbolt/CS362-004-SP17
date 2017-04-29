#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

int main(int argc, const char * argv[]) {
    
    int currentPlayer;
    struct gameState G;
    int handPos = 5;
    int i;
    int seed = 1000;
    int numPlayer = 2;
    int maxBonus = 10;
    int p, r, handcount;
    int bonus;
    int k[10] = {adventurer, council_room, feast, gardens, mine, remodel, smithy, village, baron, great_hall};
    memset(&G, 23, sizeof(struct gameState));
    r = initializeGame(numPlayer, k, seed, &G);
    
    printf("handCard():\n");
    printf("Testing to make sure a player is returned, and its not null\n");
    currentPlayer = whoseTurn(&G);
    if (currentPlayer != 0)
    {
    	printf("currentPlayer does not equal zero, passed\n");
    } else {
    	printf("currentPlayer equals 0, failed\n");
    }
    handCard(handPos, &G);
    return 0;
}
