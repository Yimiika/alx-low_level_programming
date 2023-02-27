char *_strcpy(char *dest, char *src)
{ 
	while(*src!='\0') 
	{ 
	*dest = *src; 
	src++; 
	dest++; 
	} 
	*dest='\0'; 
	return 0;
}
