#import <Foundation/Foundation.h>

@interface SecurityGuardParamContext : NSObject

+ (id)createParamContextWithAppKey:(id)arg1 paramDict:(id)arg2 requestType:(long long)arg3;	// IMP=0x00000001015f594c
@property(retain, nonatomic) NSString *reserve2; // @synthesize reserve2=_reserve2;
@property(retain, nonatomic) NSString *reserve1; // @synthesize reserve1=_reserve1;
@property(retain, nonatomic) NSMutableDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;

@end

