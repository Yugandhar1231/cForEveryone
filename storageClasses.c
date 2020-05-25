/* Purpose is to understand storage classes in C
 * 5/25/20
 */

#include <stdio.h>

int reps = 0; //extern: data segment storage, intitial value = 0, scope is global, life until end of program

void f(void)
{
	static int called = 0; //static: data segment, initial value = 0, scope within block, life until end of program
	printf("f called %d\n", called);
	called++;
	reps = reps + called; //reps unsed here
}

int main(void)
{
	auto int i = 1; //auto: stored in stack, initial value = garbage, scope within block, life end of block, auto not needed here
	const int Limit = 10; //const is used: value cannot be change unlike let in js
	for (i = 1; i < Limit; i++)
	{
		printf("i local = %d, reps global = %d\n", i,reps);
		f();
	}

	return 0;
}
