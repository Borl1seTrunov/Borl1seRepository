#include "action_selection.h"
#include "failure.h"
#include "help.h"
#include "read_text.h"
#include "output_text.h"
#include "structs.h"

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
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
		}
	}else{
		failure(FAILURE_FUNCTION_NUMBER);
		exit(0);
	}
}
