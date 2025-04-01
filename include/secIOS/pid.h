#include <Foundation/Foundation.h>
#include <mach/mach.h>
#include <mach/task_info.h>
#include <mach/mach_host.h>

@interface pidManager : NSObject
- (bool)detect_task_port_access;
@end
