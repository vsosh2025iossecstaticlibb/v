#include <Foundation/Foundation.h>
#include <mach/mach.h>
#include <mach/mach_types.h>

typedef NS_ENUM(NSInteger, MSHookInstruction) {
    ldr_x16,
    br_x16,
    adrp_x17,
    add_x17,
    br_x17
};

@interface offsetHookManager : NSObject
+ (bool)isHooked:(void *)functionAddr;
@end
