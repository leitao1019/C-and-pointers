#include <stdio.h>

void main(void)
{
    unsigned int w1=0xabcdef00u, w2=0xffff1122u;
    unsigned int rotate(unsigned int value, int n);

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));
    return;
}

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;
    unsigned int intLength=sizeof(int)*8;

    if(n>0)
    {
    	n = n % intLength;
    }
    else
    {
    	n = -(-n % intLength);
    }

    if(n==0)
    {
    	result=value;
    }
    else if(n>0)
    {
    	bits = value >> (intLength - n);
	result = value << n | bits;
    }
    else
    {
    	bits = value << (intLength - n);
	result = value >> n | bits;
    }
    return result;
}

