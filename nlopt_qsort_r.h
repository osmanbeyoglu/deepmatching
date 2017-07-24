#pragma once
#include <stdlib.h>
void nlopt_qsort_r(
	void *base_,
	size_t nmemb,
	size_t size,
	int (*compar)(const void *, const void *, void *),
	void *arg
);
