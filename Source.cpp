#include <stdio.h>
#include <string.h>
#include <locale.h>

template <class T> void swap(T* a, T* b) {
	T c = *a;
	*a = *b;
	*b = c;
}

int main() {
	setlocale(0, "rus");
	int i = 0, j = 1;
	double x = 0.0, y = 1.0;
	const char* s1 = "first", * s2 = "second";
	printf("\tПеред обменом: \n" "i=%d j=%d\n" "x=%f y=%f\n" "s1=%s s2=%s\n", i, j, x, y, s1, s2);

	swap(&i, &j);
	swap(&x, &y);
	swap(&s1, &s2);
	printf("\tПосле обмена: \n" "i=%d j=%d\n" "x=%f y=%f\n" "s1=%s s2=%s\n", i, j, x, y, s1, s2);
	return 0;
}