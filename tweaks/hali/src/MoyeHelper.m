#import "MoyeHelper.h"

@implementation Logger

+ (void)write:(NSString *) content {
    NSString * aPath = @"/moye/hali.log";

    NSFileHandle *fileHandle =
        [NSFileHandle fileHandleForWritingAtPath:aPath];
    [fileHandle seekToEndOfFile];
    [fileHandle writeData:[content dataUsingEncoding:NSUTF8StringEncoding]];
    [fileHandle writeData:[@"\n" dataUsingEncoding:NSUTF8StringEncoding]];
    [fileHandle closeFile];
}

@end
