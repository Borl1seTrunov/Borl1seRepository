#include "action_selection.h"
#include "failure.h"
#include "help.h"
#include "read_text.h"
#include "treatment_text.h"
#include "output_treatment_text.h"
#include "structs.h"

void action_selection(){
	size_t number_command;
	scanf("%ld", &number_command);
	getchar();
	if (number_command == 5){
		help();
	}else{
		Text *  text = read_text();
		//text = treatment_text(text);
		switch (number_command){
			case 0:
				output_treatment_text(text);
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			default:
				failure(FAILURE_FUNCTION_NUMBER);
		}
	}
}
