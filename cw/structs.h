#ifndef STRUCTS_HEADER
#define STRUCTS_HEADER
#include <wchar.h>
#include <stdlib.h>

struct Sentence{
	size_t length;
	size_t last_index;
	wchar_t * sentence;
};

struct Text{
	size_t length;
	wchar_t ** text;
};

typedef struct Sentence Sentence;
typedef struct Text Text;

#endif
