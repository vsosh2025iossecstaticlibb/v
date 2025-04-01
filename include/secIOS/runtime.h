#include  <Foundation/Foundation.h>
#include  <objc/runtime.h>
#include  <dlfcn.h>
#include  <mach-o/dyld.h>

@interface RuntimeHookManager : NSObject
+ (bool)isHooked:(NSArray<NSString *> *)dyldAllowList
                         detectionClass:(Class)detectionClass
                               selector:(SEL)selector
                          isClassMethod:(BOOL)isClassMethod;
@end
