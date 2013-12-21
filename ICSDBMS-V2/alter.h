void alter_table(char *args[]){
	printf("%s\n",args[1]);
	if(strcmp(args[2],"add")==0){
	printf("add column\n");

	}
	
	if(strcmp(args[2],"rename")==0){
	printf("rename column\n");
	//read table attributes	
	}

	if(strcmp(args[2],"drop")==0){
	printf("drop column\n");
	}

}
