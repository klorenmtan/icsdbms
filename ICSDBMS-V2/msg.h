#include <stdio.h>
#include <iostream>
using namespace std;

void showmsg(){
	printf("Welcome to ICS Database Management System Version 1.0\n");
	printf("This is the Storage Management and File structure part \n");
	printf("Assume that all the input values are in lower case given by the processor\n");
	printf("written in C++\n");	
	printf("\n");
}

void showexit(){
	printf("Thank You for using ICSDBMS\n");
}

void error_msg(int num){
	switch(num){
	
	case 200: printf("ICSDBMS_ERROR200: CREATE_TABLE_NOT_SUCCESSFUL\n");
				break;
	case 201: printf("ICSDBMS_ERROR201: INSERT_DATA_NOT_SUCCESSFUL\n");
				break;
	case 202: printf("ICSDBMS_ERROR202: DELETE_DATA_NOT_SUCCESSFUL\n");
				break;
	case 203: printf("ICSDBMS_ERROR203: UPDATE_DATA_NOT_SUCCESSFUL\n");
				break;
	case 204: printf("ICSDBMS_ERROR204: ALTER_TABLE_NOT_SUCCESSFUL\n");
				break;
	case 205: printf("ICSDBMS_ERROR205: DROP_TABLE_NOT_SUCCESSFUL\n");
				break;
	case 206: printf("ICSDBMS_ERROR206: DROP_TABLE_DOESN'T_EXIST\n");
				break;
	case 207: printf("ICSDBMS_ERROR207: TABLE_DOESN'T_EXIST\n");
				break;
	}
}

void success_msg(int num){
	switch(num){
	
	case 100: printf("ICSDBMS_MSG100: CREATE_TABLE_SUCCESSFUL\n");
				break;
	case 101: printf("ICSDBMS_MSG101: INSERT_DATA_SUCCESSFUL\n");
				break;
	case 102: printf("ICSDBMS_MSG102: DELETE_DATA_SUCCESSFUL\n");
				break;
	case 103: printf("ICSDBMS_MSG103: UPDATE_DATA_SUCCESSFUL\n");
				break;
	case 104: printf("ICSDBMS_MSG104: ALTER_TABLE_SUCCESSFUL\n");
				break;
	case 105: printf("ICSDBMS_MSG105: DROP_TABLE_SUCCESSFUL\n");
				break;
	}
}

