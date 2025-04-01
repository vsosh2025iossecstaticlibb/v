#include <Foundation/Foundation.h>
#include <DeviceCheck/DCDevice.h>

@interface DCDeviceManager : DCDevice
+ (void)fetchDeviceIdentifierWithCompletion:(void (^)(NSString *identifier, NSError *error))completion;
@end
