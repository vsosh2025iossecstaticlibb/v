#include <Foundation/Foundation.h>
#include <UIKit/UIKit.h>
#include <objc/message.h>

#include "anti-debug.h"
#include "pid.h"
#include "bundle.h"
#include "files.h"
#include "dyld.h"
#include "offsethook.h"
#include "runtime.h"


@interface setupManager : NSObject
- (void)setupAC;
@end

//char* bundleid = "com.andrdev.testingSECc";
