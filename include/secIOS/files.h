#include <Foundation/Foundation.h>
#include <mach-o/dyld.h>
#include <sys/stat.h>

@interface FileManager : NSObject
+ (bool)isEmbeddedProvision;
+ (bool)isSignedByEsign;
+ (bool)hasRootPrivileges;
+ (bool)hasRestrictedPaths;
+ (bool)hasRestrictedSymlinks;
//+ (bool)Contains:(std::vector<const char *>)entries;
//+ (bool)Equals:(std::vector<const char *>)entries;
@end
