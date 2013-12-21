#include <iostream>
#include <stdio.h>
#include <string.h>
#include <array>
#include "msg.h"
#include "tokenize.h"
#include "create.h"
#include "drop.h"
#include "t_data.h"
#include "alter.h"
#define MAX_LINE 256
using namespace std;

int main(){
	char inputBuffer[MAX_LINE];
	char *args[MAX_LINE/2 + 1]; 
	showmsg();
	while(1){
	printf("ICSDBMS>");
	gets(inputBuffer);
	tokenizer(inputBuffer, args);	
	
	if(strcmp(args[0], "create") == 0){
	//printf("This is create\n");
	
		if(!check_exist(args[0],args[1])){	
		create_table(args[1]);
		table_data(args[1],args[2],args);	
		success_msg(100);
		}
		else{error_msg(200);}

	}
	else if(strcmp(args[0], "drop")==0){
		if(check_exist(args[0],args[2])!=0){
			if(check_exist_tmp(args[2])!=0){
				if(args[1]=="table"){
				//remove_table(args[1]);
				success_msg(105);
				}
				else{
				copy_to_tmp(args[2]);
				//remove_table(args[1]);
				success_msg(105);
				}
			}
			
		}
		else{error_msg(206);}	
	}

	
	else if(strcmp(args[0], "alter")==0){
	printf("This is alter\n");
		if(check_exist(args[0],args[1])!=0){
			if(check_exist_tmp(args[2])!=0){	
			alter_table(args);	
			}
			else {
			copy_to_tmp(args[2]);
			alter_table(args);				
			}
		}else{error_msg(207);}	
	
		
	
	/**
	if(strcmp(args[0], "select")==0){
	printf("This is select\n");
	}
	
	if(strcmp(args[0], "insert")==0){
	printf("This is insert\n");
	}

	if(strcmp(args[0], "delete")==0){
	printf("This is delete\n");
	}
	
	if(strcmp(args[0], "update")==0){
	printf("This is update\n");
	}
	**/
	else if(strcmp(args[0], "quit") == 0){ 
	showexit();
	exit(0);
	}
	
	else { printf("Command not found!\n");}	
	}// end of while

}//end of main
