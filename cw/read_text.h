#ifndef READ_TEXT_HEADER
#define READ_TEXT_HEADER

#include <wchar.h>
#include <stdlib.h>
#include "structs.h"
#include "failure.h"

#define SYMBOL_NEW_LINE L'\n'
#define SYMBOL_END_STRING L'\0' 
#define SYMBOL_POINT L'.'
#define SYMBOL_SPACE L' '

Text * read_text();
Sentence * text_to_sentence(wchar_t * text, size_t start_index);
wchar_t * read();

#endif
