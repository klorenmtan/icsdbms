void copy_to_tmp(char *name){
	char command[1000];	
	command[0]='\0';
	strcat(command,"./scripts/copy_files.sh ");
	strcat(command,name);
	system(command);	
}

void remove_table(char *name){
	char command[1000];
	command[0]='\0';
	strcat(command,"./scripts/remove_files.sh ");
	strcat(command,name);
	strcat(command," 1");
	system(command);	
}

int check_exist_tmp(char *name){
	int i;	
	char command[1000];
	command[0]='\0';
	strcat(command,"./scripts/check_exist_tmp.sh ");
	strcat(command,name);
	strcat(command,".dat");
	i=system(command);
	return i;
}
