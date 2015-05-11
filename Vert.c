#include <stdio.h>
#include <stdlib.h>


read_lines(case *c, char[] string)
{
	int i;
	char[] line;
	c->word(&string);
	for (i=0; i<20; i++) {
		scanf("%s",&line[0]);
		if(line[]!={}){
			c->text[i]=line;
		}
	}
}


main()
{
	case c;
	init_case(c);
	int stage=0;
	for(int ct = 0; ct < i; ++ct)
	{
		int ch = getchar();
		if (ch == EOF)
			{
				// something bad happened; we quit
				exit(EXIT_FAILURE);
			}	
		if (ch == '\n')
			{
				// we had an empty line
				print_case(c);
				stage=0;
				init_case(c);
			}
		else if(stage==0)
		{
			// The first character was not a newline, scanning
			// with the character set format would have succeeded.
			// But we don't know what comes next, so we put the
			// character back first.
			// Although one character of pushback is guaranteed,
			if (ungetc(ch,stdin) == EOF)
				{
					// pushback failed
					exit(EXIT_FAILURE);
				}	
			scanf("%20[^\n]%*c",buff);
			if(buff=="END")
				{
					break;
				}
			c->word=buff;
			stage=1;
		}	
		else if(stage==1)
		{
			// The first character was not a newline, scanning
			// with the character set format would have succeeded.
			// But we don't know what comes next, so we put the
			// character back first.
			// Although one character of pushback is guaranteed,
			if (ungetc(ch,stdin) == EOF)
				{
					// pushback failed
					exit(EXIT_FAILURE);
				}	
			scanf("%80[^\n]%*c",buff);
			if(buff=="END")
				{
					break;
				}
			c->text[c.loc]=buff;
			c.loc++;
		}
	}	
}	