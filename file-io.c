#include <stdio.h>

int main( ) 
{
	FILE *fp;
	fp = fopen( "data.text", "wb" );
	char x[20] = "File I/O in C!";
	fwrite( x, sizeof( x[ 0 ] ), sizeof( x ) / sizeof( x[0] ), fp );
}
