/* strindex: return position of t in s, return -1 if not found.		*/
int strindex(char s[], char t[])
{
	int i, j, k;

	for(i = 0; s[i] != '\0'; i++){
		for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++,k++)
			;// do nothing
		if(k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}
