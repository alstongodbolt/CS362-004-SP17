//
//  cardTest3.c
//  tests
//
//  Created by Alston Godbolt on 4/25/17.
//  Copyright © 2017 alston godbolt. All rights reserved.
//
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#define TESTCARD "Council_room"

int main(int argc, const char * argv[]) {
    struct gameState G, testG;
    int handPos = 2;
    int drawntreasure=3;
    int cardDrawn;
    int temphand[MAX_HAND];
    int z = 1;
    int currentPlayer = 1;
    int i;
    int numPlayers = 2;
    int seed = 1000;
    int k[10] = {adventurer, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy, council_room};
    int testDraw = 0;
    int choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;
    
    printf("Testing card: %s\n", TESTCARD);
    memcpy(&testG, &G, sizeof(struct gameState));
    //cardEffect(council_room, choice1, choice2, choice3, &testG, handPos, &bonus);
    initializeGame(numPlayers, k, seed, &G);
    
    

    for ( i = 0; i < 4; i++)
    {
        drawCard(currentPlayer, &testG);
        testDraw++;
    }
    if (testDraw == 4) {
        printf("drawCard worked correctly\n");
    } else{
        printf("drawCard failed: %i", testDraw);
    }
    return 0;
}
