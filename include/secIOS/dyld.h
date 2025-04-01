#include <Foundation/Foundation.h>
#include <mach-o/dyld.h>
#include <mach-o/nlist.h>
#include <dlfcn.h>

@interface LoadManager : NSObject

@property (weak, nonatomic) id imageAddedTarget;
@property (weak, nonatomic) id imageRemovedTarget;
@property (assign, nonatomic) SEL imageAddedSelector;
@property (assign, nonatomic) SEL imageRemovedSelector;

typedef NS_OPTIONS(NSInteger, LMOptions)
{
    LMParseBundleOnly = 1 << 0,
    LMIncludeDuplicates = 1 << 1,
    LMImageParseMach = 1 << 2,
    LMImageExcludePath = 1 << 3,
    LMSymbolEmitDlsym = 1 << 4,
    LMSymbolEnsureEquality = 1 << 5
};

+ (NSArray<NSString *> *)getImages:(LMOptions)options;
+ (NSArray<NSString *> *)getAddedImages;
+ (NSArray<NSString *> *)getRemovedImages;
+ (NSArray<NSString *> *)getSymbols:(LMOptions)options;
+ (bool)ContainsImage:(NSArray<NSString *> *)entries options:(LMOptions)options;
+ (bool)ContainsImage:(LMOptions)options;
+ (bool)ContainsSymbol:(NSArray<NSString *> *)entries options:(LMOptions)options;
+ (bool)ContainsSymbol:(LMOptions)options;
+ (bool)Equals:(NSArray<NSString *> *)entries;
- (void)RegisterImageAddedCallback:(id)target selector:(SEL)selector;
- (void)RegisterImageRemovedCallback:(id)target selector:(SEL)selector;

@end

