//longest no rep
#include <stdio.h>
#include <string.h>
#define limit 180

int main() {
	char word[limit];
	int i=0,offset=1,check=0;
	branch:
	printf("enter your word:\n");
	scanf("%s",&word);
	//finds how long a word is
	while(word[check]!='\0'){
		check++;
	}
	if(check==1){
		printf("plz enter a word with more than 2 letters\n");
		goto branch;
	}
    while(word[i]!=word[i+offset] && i<check-1){
      if(i+offset==check-1) {
	  offset=0;
	  i++;
	  }
	  offset++;
	}
	
	if(i==check-1){
	printf("the word:%s has no repeating characters",word);
	}
	else{
		printf("the word %s has a repeating character and it is:%c and the longest part with no repetitions is ",word,word[i]);
		for(check=0;check<offset+i;check++){
			printf("%c",word[check]);
		}
	}
 return 0;
}
