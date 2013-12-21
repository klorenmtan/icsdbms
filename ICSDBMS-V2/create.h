int create_table(char *args){
	int i;	
	char command[1000];
	command[0]='\0';
	strcat(command,"./scripts/create_file.sh ");
	strcat(command,args);
	strcat(command," data/main");
	i=system(command);
	return i;
}


int check_exist(char *name,char *args){
	int i;	
	char command[1000];
	
	if(strcmp(name,"create")==0){
	command[0]='\0';
	strcat(command,"./scripts/check_exist.sh ");
	strcat(command,args);
	strcat(command,".dat");
	i=system(command);
	return i;
	}
	else if(strcmp(name,"drop")==0){
	command[0]='\0';
	strcat(command,"./scripts/check_exist.sh ");
	strcat(command,args);
	strcat(command,".dat");
	i=system(command);
	return i;
	}
	else if(strcmp(name,"alter")==0){
	command[0]='\0';
	strcat(command,"./scripts/check_exist.sh ");
	strcat(command,args);
	strcat(command,".dat");
	i=system(command);
	return i;
	}
}

