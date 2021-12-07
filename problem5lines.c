//Brianna Hill bhill28@student.gsu.edu 
#ifndef PROBLEM5CHAR_C_INCLUDED
#define PROBLEM5CHAR_C_INCLUDED
int problem5char(FILE *fp)
{
int char_count = 0; // scan for character count
char x; 
for(x = fgetc(fp); x!=EOF; x=fgetc(fp))
{
char_count++; // increment
}
return char_count; // display result
}

#endif // PROBLEM5CHAR_C_INCLUDED
