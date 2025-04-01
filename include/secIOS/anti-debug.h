#include <Foundation/Foundation.h>
#include <dlfcn.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/sysctl.h>
#include<sys/types.h>
#include <unistd.h>

typedef int (*ptrace_ptr_t)(int _request, pid_t _pid, caddr_t _addr, int _data);

@interface AntiDebugManager : NSObject
- (bool)isDebuggerAttachedUsingSysctl;
- (bool)isDebuggerAttachedUsingGetppid;
@end

