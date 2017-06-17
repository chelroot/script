#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {
   char sopt[] = "d:t:v";
   int c, dev = 0, tim = 0, debug_level = 0;
   while( -1 != ( c = getopt( argc, argv, sopt ) ) )
      switch( c ) {
         case 'd':
            dev = atoi( optarg );
            break;
         case 't':
            tim = atoi( optarg );
            break;
         case 'v': 
            debug_level++;
            break;
         default :
            fprintf( stdout, "option must be: %s\n", sopt );
      }
   printf( "options value was:" );
   printf( "\td:%d\tt:%d\tv:%d\n", dev, tim, debug_level );
   printf( "parameters was:" );
   for( c = optind; c < argc; c++ ) printf( "\t<%s>", argv[ c ] );
   printf( "\n" );
   return 0;
};


