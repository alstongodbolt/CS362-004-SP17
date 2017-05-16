//
//  cardTest4.c
//  tests
//
//  Created by Alston Godbolt on 4/25/17.
//  Copyright © 2017 alston godbolt. All rights reserved.
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#define TESTCARD "great_hall"

int main(int argc, const char * argv[]) {
    struct gameState G, testG;
    int handPos;
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
    int j = 1;
    int choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;
    
    
    printf("Testing card: %s\n", TESTCARD);
    memcpy(&testG, &G, sizeof(struct gameState));
    //cardEffect(great_hall, choice1, choice2, choice3, &testG, handPos, &bonus);
    
    initializeGame(numPlayers, k, seed, &G);
    
    printf("Testing drawCard function\n");
    if (drawCard(currentPlayer, &G) == 1) {
        printf("drawCard test passed");
    } else {
        printf("drawCard test failed");
    }
    printf("Testing actions\n");
    printf("Actions = %d, expected = 1\n", G.numActions);
    printf("Test discardCard function\n");
    z = discardCard(handPos, currentPlayer, &G, 0);
    printf("DiscardCard = %d, expected = 1\n", z);
    return 0;
}
