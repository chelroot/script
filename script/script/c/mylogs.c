#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main( int argc, char **argv, char **envp ) {
   int i;
   openlog( argv[ 0 ], LOG_NDELAY, LOG_USER );
// LOG_EMERG=0,   LOG_ALERT=1,  LOG_CRIT=2, LOG_ERR= 3
// LOG_WARNING=4, LOG_NOTICE=5, LOG_INFO=6, LOG_DEBUG=7
   for( i = LOG_EMERG; i <= LOG_DEBUG; i++ ) {
      syslog( i, "log. level = %d", i );
      printf( "done: log. level = %d\n", i );
   }
   closelog();
   return( EXIT_SUCCESS );
}
