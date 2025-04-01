#include <Foundation/Foundation.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

@interface envManager : NSObject
- (void)make_env;
@end

extern char **environ;
static char **hiddenEnviron = NULL;
