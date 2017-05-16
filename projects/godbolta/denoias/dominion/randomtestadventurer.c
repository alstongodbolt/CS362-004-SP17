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

int testadventurer(struct gameState *post, int p){
    
    struct gameState pre;
    memcpy(&pre, post, sizeof(struct gameState));
    int r;
    //r = adventurer1(&pre);
    int drawntreasure, cardDrawn;
    int currentPlayer = whoseTurn(post);
    int temphand[MAX_HAND];
    int z;
    
    
    while (drawntreasure < 2) {
        if (pre.deckCount[p]) {
            shuffle(p, &pre);
        }
        drawCard(p, &pre);
        cardDrawn = pre.hand[p][pre.handCount[p]];
        /*if (cardDrawn == 0 || cardDrawn == 3 || cardDrawn == 6) {
            drawntreasure++;
        }
        //else{
            temphand[z] == cardDrawn;
            pre.handCount[p]--;
            z++;
        //}*/
            
    }
    /*while (z-1 >= 0) {
        pre.discard[p][pre.discardCount[p]++] = temphand[z-1];
        z = z -1;
    }*/
    //assert(r = 0);
    //assert(memcmp(&pre, post, sizeof(struct gameState)) == 0);
    return 0;
}

int main(int argc, const char * argv[]) {
    SelectStream(2);
    
    PutSeed(3);
    int n, i, p;
    struct gameState G;
    for(n = 0; n < 1000; n++)
    {
        for(i = 0; i < sizeof(struct gameState); i++)
        {
            ((char*)&G)[i] = floor(Random() * 256);
        }
        p = floor(Random() * 2);
        G.deckCount[p] = floor(Random() * MAX_DECK);
        G.discardCount[p] = floor(Random() * MAX_DECK);
        G.handCount[p] = floor(Random() * MAX_HAND);
        testadventurer(&G, p);
    }
        return 0;
}

