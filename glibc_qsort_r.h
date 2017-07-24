#pragma once
#include <stdlib.h>

typedef int (*__compar_d_fn_t) (const void *, const void *, void *);

inline void qsort_r(void *const pbase, size_t total_elems, size_t size, __compar_d_fn_t cmp, void *arg) {
  extern void _quicksort(void *const pbase, size_t total_elems, size_t size, __compar_d_fn_t cmp, void *arg);
  return _quicksort(pbase, total_elems, size, cmp, arg);
}
