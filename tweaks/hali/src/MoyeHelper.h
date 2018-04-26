#import <Foundation/Foundation.h>

@interface Logger : NSObject
+ (void)create;
+ (void)write:(NSString *) content;
@end
