#ifndef DA_H
#define DA_H

#include <assert.h>
#include <stdlib.h>

// #define DA_TYPE(type) type*

#define DA_DEFAULT_CAP 8

#define DA(type, name)                                                         \
  typedef struct {                                                             \
    type *data;                                                                \
    size_t count;                                                              \
    size_t capacity;                                                           \
  } name

#define da_reserve(arr, e_cap)                                                 \
  do {                                                                         \
    if ((e_cap) > (arr)->capacity) {                                           \
      if ((arr)->capacity == 0) {                                              \
        (arr)->capacity = DA_DEFAULT_CAP;                                      \
      }                                                                        \
      while ((e_cap) > (arr)->capacity) {                                      \
        (arr)->capacity *= 2;                                                  \
      }                                                                        \
      (arr)->data =                                                            \
          realloc((arr)->data, (arr)->capacity * sizeof(*(arr)->data));        \
      assert((arr)->data != NULL && "Buy more RAM.");                          \
    }                                                                          \
  } while (0)

#define da_append_item(arr, item)                                              \
  do {                                                                         \
    da_reserve((arr), (arr)->count + 1);                                       \
    (arr)->data[(arr)->count++] = (item);                                      \
  } while (0)

#define da_free(arr)                                                           \
  do {                                                                         \
    free((arr)->data);                                                         \
  } while (0)

#endif // DA_H
