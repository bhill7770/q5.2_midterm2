//Brianna Hill bhill28@student.gsu.edu 
#ifndef PROBLEM5LINES_C_INCLUDED
#define PROBLEM5LINES_C_INCLUDED
int problem5lines(FILE *fp)
{
int line_count = 1; // to get next line 
char x;
for(x = fgetc(fp); x!=EOF; x=fgetc(fp))
{
if (x =='\n')
line_count++; //increment
}
return line_count; //display result
}

#endif // PROBLEM5LINES_C_INCLUDED
