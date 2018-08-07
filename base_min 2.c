#include <stdio.h>

void print_base_neg_2(int no);

int main() {
	//code
	int no ;
	scanf("%d", &no);
	print_base_neg_2(no);
	return 0;
}

void print_base_neg_2(int no) {
    int result[100];
	int k=0;
	
    while(1) {
	    int quot;
	    if(no >= 0) {
	        quot = no/-2;
	    } else {
	        quot = no % 2 ? ((no/-2) + 1) : (no/-2);
	    }
	    
	    int remainder =  no - (quot * -2);
	    result[k++] = remainder;
	    if(quot == 1 || quot == 0) {
	        result[k++] = quot;
	        break;
	    }
	    no=quot;
	}
	
	int leading_1_came = 0, i;
	for(i=k-1; i>=0; i--) {
	    if(result[i] == 1) {
	        leading_1_came = 1;
	    }
	    
	    if(leading_1_came) {
	        printf("%d", result[i]);
	    }
	}
}
