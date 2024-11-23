#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int foo(int x, int y){
	return x+y;
}

bool p(int x){
	return x % 2 == 0;
}

void prinf_if (int xs[10], bool(*predicate)(int)){
	for (int i = 0; i < 10; i++) {
		if (predicate(xs[i])){
			printf("%d\n", xs[i]);
		}
	}
}
int main(){
	int xs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int (*f)(int, int) = foo;
	//printf("%d", f(3, 4));

	prinf_if(xs, p);

	return 0;
}
