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
    int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel, smithy, village, baron, great_hall};;
    int seed = 1000;
    struct gameState G;
    int randomSeed = 25;
    int newGame;
    int card = 20;
    
    printf("Testing supplyCount():\n");
    memset(&G, 23, sizeof(struct gameState));
    
    newGame = initializeGame(numberPlayers, kCards, seed, &G);
    printf("%d", G.supplyCount[card]);
    if (G.supplyCount[card] > 0) {
        printf("%d is correct", G.supplyCount[card]);
    } else{
        printf("%d is incorrect", G.supplyCount[card]);
    }
    return 0;
}
