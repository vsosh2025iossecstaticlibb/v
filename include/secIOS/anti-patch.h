#include <Foundation/Foundation.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

struct OffsetValue {
    uintptr_t offset;
    uint32_t value;
};

#define MAX_OFFSETS 10000
static struct OffsetValue offset_Values[MAX_OFFSETS] = {0};

@interface patchManager : NSObject
- (bool)save_Offset_Value:(uintptr_t)offset value:(uint32_t)value;
- (bool)is_Offset_Patched_runtime:(uintptr_t)offset;
@end
