/* any: return first location in s1 where any char from s2 occurs 	*/
int any(char s1[], char s2[])
{
	int i, j;
	for(i = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j]){
				return i;
			}
			else{
				;
			}
		}
	}
	return -1;
}
