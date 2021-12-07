//Brianna Hill bhill28@student.gsu.edu 
#ifndef PROBLEM5WORDS_C_INCLUDED
#define PROBLEM5WORDS_C_INCLUDED

int problem5words(FILE *fp)
{
int word_count = 0; //to scan for word count
char x; 
for(x = fgetc(fp); c!=EOF; c=fgetc(fp)) 
{
if (x ==' ' || x=='\n')
word_count++; //increment
}
return word_count; //display result
} 
#endif // PROBLEM5WORDS_C_INCLUDED

