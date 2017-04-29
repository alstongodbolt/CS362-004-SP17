//
//  cardTest1.c
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
#define TESTCARD "SMITHY"
int main(int argc, const char * argv[]) {
    struct gameState G, testG;
    int handPos;
    int currentPlayer = 1;
    int i;
    int numPlayers = 2;
    int seed = 1000;
    int choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;
    int k[10] = {adventurer, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy, council_room};
    
    printf("Testing card: %s\n", TESTCARD);
    memcpy(&testG, &G, sizeof(struct gameState));
    cardEffect(smithy, choice1, choice2, choice3, &testG, handPos, &bonus);
    
    initializeGame(numPlayers, k, seed, &G);
    
    
    /*for (i = 1; i < 3; i++) {
        drawCard(currentPlayer, &G);
    }*/
    printf("testing if drawCard matches what should be in players in players hand\n");
    if (drawCard(currentPlayer, &G) == 3) {
        printf("Test passed\n");
    }else {
        printf("Test Failed\n");
    }
    printf("Testing discard function\n");
        int dcard =  discardCard(handPos, currentPlayer, &G, 0);
    printf("%d\n", dcard);
    
    printf("Testing discard function\n");
    int dcard1 =  discardCard(handPos, currentPlayer, &testG, 1);
    printf("%d\n", dcard1);
    



    
    return 0;
}
