#include <stdio.h>

void generateParanthesis(int p[], 
                        int index, 
                        int pairs, 
                        int open_count,
                        int close_count)
{
    if(index == (2*pairs))
    {
        int i;
        for(i=0; i<index; i++)
        {
            printf("%c", p[i]);
        }
        
        printf("\n");
        return;
    }
    
    if(open_count < pairs)
    {
        p[index] = '(';
        generateParanthesis(p, index + 1, pairs, open_count + 1, close_count);
    }
    
    if(close_count < open_count)
    {
        p[index] = ')';
        generateParanthesis(p, index + 1, pairs, open_count, close_count + 1);
    }
    
    return;
}

void generateParanthesisWrapper(int pairs)
{
    int p[30];
    generateParanthesis(p, 0, pairs, 0, 0);
}

int main() {
	//code
	int pairs;
	scanf("%d", &pairs);
	
	generateParanthesisWrapper(pairs);
	return 0;
}
