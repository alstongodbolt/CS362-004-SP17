CFLAGS = -Wall -fpic -coverage -lm

default: unittestresults.out

unittestresults.out: unittest1.c unittest2.c unittest3.c cardtest1.c cardtest2.c cardtest3.c cardtest4.c randomtestcard1.c randomtestcard2.c randomtestadventurer.c dominion.c rngs.c
	echo “Result for running dom tests:” > unittestresults.out
	
	echo “unittest1.c:” >> unittestresults.out
	gcc -o unittest1 unittest1.c dominion.c rngs.c $(CFLAGS)
	unittest1 >> unittestresults.out
	gcov dominion.c >> unittestresults.out
	
	echo “unittest2.c:” >> unittestresults.out
	gcc -o unittest2 unittest2.c dominion.c rngs.c $(CFLAGS)
	unittest2 >> unittestresults.out
	gcov dominion.c >> unittestresults.out

	echo “unittest3.c” >> unittestresults.out
	gcc -o unittest3 unittest3.c dominion.c rngs.c $(CFLAGS)
	unittest3 >> unittestresults.out
	gcov dominion.c >> unittestresults.out 

	echo “unittest4.c” >> unittestresults.out
	gcc -o unittest4 unittest4.c dominion.c rngs.c $(CFLAGS)
	unittest4 >> unittestresults.out
	gcov dominion.c >> tests.out

	echo “cardtest1.c” >> unittestresults.out
	gcc -o cardtest1 cardtest1.c dominion.c rngs.c $(CFLAGS)
	cardtest1 >> unittestresults.out
	gcov dominion.c >> unittestresults.out

	echo “cardtest2.c” >> unittestresults.out
	gcc -o cardtest2 cardtest2.c dominion.c rngs.c $(CFLAGS)
	cardtest2 >> unittestresults.out
	gcov dominion.c >> unittestresults.out

	echo “cardtest3.c” >> unittestresults.out
	gcc -o cardtest3 cardtest3.c dominion.c rngs.c $(CFLAGS)
	cardtest3 >> unittestresults.out
	gcov dominion.c >> unittestresults.out

	echo “cardtest4.c” >> unittestresults.out
	gcc -o cardtest4 cardtest4.c dominion.c rngs.c $(CFLAGS)
	cardtest4 >> unittestresults.out
	gcov dominion.c >> unittestresults.out

	echo “randomtestcard1.c” >> unittestresults.out
	gcc -o randomtestcard1 randomtestcard1.c dominion.c rngs.c $(CFLAGS)
	randomtestcard1 >> unittestresults.out
	gcov dominion.c >> unittestresults.out

	echo “randomtestcard2.c” >> unittestresults.out
	gcc -o randomtestcard2 randomtestcard1.c dominion.c rngs.c $(CFLAGS)
	randomtestcard2 >> unittestresults.out
	gcov dominion.c >> unittestresults.out

	echo “randomtestadventurer.c” >> unittestresults.out
	gcc -o randomtestadventurer randomtestadventurer.c dominion.c rngs.c $(CFLAGS)
	randomtestadventurer >> unittestresults.out
	gcov dominion.c >> unittestresults.out

clean:
	rm tests.out

cleanall:
	rm tests.out unittest1 unittest2 unittest3 unittest4 cardtest1 cardtest2 cardtest3 cardtest4 randomtestcard1 randomtestcard2 randomtestadventurer.c *.gcda *.gcno *.gcov