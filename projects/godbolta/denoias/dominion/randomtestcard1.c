#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <math.h>
#define DEBUG 0
#define NOISY_TEST 1
int testSmithy(struct gameState *post, int p) {
    struct gameState pre;
    memcpy(&pre, post, sizeof(struct gameState));
    int currentPlayer = whoseTurn(&pre);
    printf("Current player = %d", currentPlayer);
    int r, i, t;
    //r = smith (&pre, p);
    for (i = 1; i < 3; i++) {
         drawCard(p, &pre);
        
    }

    return 0;

}
int main()
{
    struct gameState G;
    SelectStream(2);
    PutSeed(3);
    int n, i, p, handPos;
    
    for (n = 0; n < 2000; n++) {
        for (i = 0; i < sizeof(struct gameState); i++) {
            ((char*)&G)[i] = floor(Random() * 256);
        }
        p = floor(Random() * 2);
        G.deckCount[p] = floor(Random() * MAX_DECK);
        G.discardCount[p] = floor(Random() * MAX_DECK);
        G.handCount[p] = floor(Random() * MAX_HAND);
        //handPos = floor(Random() * MAX_HAND);
        testSmithy(&G, p);
    }
    return 0;
}
