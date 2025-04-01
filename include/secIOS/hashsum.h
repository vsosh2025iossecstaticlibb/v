#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <libgen.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <mach-o/fat.h>
#include <mach-o/loader.h>
#include <Foundation/Foundation.h>

#ifdef __APPLE__
#include <CommonCrypto/CommonCrypto.h>
#define SHA256  CC_SHA256
#define SHA256_(x)  CC_SHA256_##x
#else
#include <openssl/sha.h>
#define SHA256_(x)  SHA256_##x
#endif

#if DEBUG==1
#define LOG printf
#else
#define LOG
#endif

SHA256_(CTX) g_hash_ctx;
uint8_t g_macho_hash[SHA256_(DIGEST_LENGTH)]={0};

@interface hashsumManager : NSObject
- (char *)calculate_macho_hash;
@end
