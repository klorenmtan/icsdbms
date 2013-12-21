void tokenizer(char inputBuffer[], char *args[]){
	while(*inputBuffer!='\0'){
		while(*inputBuffer==' ')
		*inputBuffer++ = '\0';
	*args++ = inputBuffer;
		while(*inputBuffer!='\0' && *inputBuffer !=' ')
		inputBuffer++;
	}
	*args='\0';
}


