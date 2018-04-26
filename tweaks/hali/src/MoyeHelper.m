#import "MoyeHelper.h"

@implementation Logger

+ (void)create {
    NSString * aPath = @"/moye/dwarf.log";

    NSFileHandle *fileHandle =
        [NSFileHandle fileHandleForWritingAtPath:aPath];

    [fileHandle truncateFileAtOffset: 0];
    [fileHandle closeFile];
}


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
