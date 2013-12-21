void table_data(char *name, char *size, char *args[]){
	char filename[1000];
	int num = atoi(size);	
	printf("%d\n",num);
	int i,counter=1,flag=0;
	filename[0]='\0';
	strcat(filename,"data/main/");	
	strcat(filename,name);
	strcat(filename,".stdat");
	
	FILE *file = fopen(filename,"w+");
	
	for(i=3;i<(num+3);i++){
		//datatypes
		if((strcmp(args[i],"int")==0) || (strcmp(args[i],"float")==0) || (strcmp(args[i],"char")==0) || (strcmp(args[i],"boolean")==0) || (strcmp(args[i],"date")==0)){
		fprintf(file, " %s",args[i]);
		
		}
		//constraints
		else if((strcmp(args[i],"primary_key")==0) || (strcmp(args[i],"unique")==0) || (strcmp(args[i],"not_null")==0)){
		fprintf(file, " %s",args[i]);
		}
		//varchar special case
		else if(strcmp(args[i],"varchar")==0){
			fprintf(file, " %s",args[i]);
			fprintf(file, "%s",args[i+1]);
			i++;
			
		}
		//for column names 
		else{
			if(counter==1){	fprintf(file, "%s",args[i]); counter++;}
			else{fprintf(file, "\n"); fprintf(file, "%s",args[i]); }	
		}
		

	}	
		
	fclose(file);	
	
}
	

