#include "action_selection.h"
#include "failure.h"
#include "help.h"
#include "read_text.h"
#include "output_text.h"
#include "structs.h"
#include "free_memory.h"
#include "move_words.h"
#include "delete_last_upper_char.h"


void action_selection(){
	size_t number_command;
	wscanf(L"%ld", &number_command);
	getwchar();
	if (number_command == 5){
		help();
	}else if (0 <= number_command && number_command < 5){
		Text *  text = read_text();
		switch (number_command){
			case 0:
				output_text(text);
				free_memory(text);
				break;
			case 1:
				move_words(text);
				free_memory(text);
				break;
			case 2:
				wprintf(L"TEST 2");
				break;
			case 3:
				wprintf(L"TEST 3");
				break;
			case 4:
				delete_last_upper_char(text);
				free_memory(text);
				break;
		}
	}else{
		failure(FAILURE_FUNCTION_NUMBER);
		exit(0);
	}
}
