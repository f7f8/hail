#import "MoyeHelper.h"
#import "SecurityGuardParamContext.h"

%hook iAliexpressAppDelegate

- (id)application:(id)application didFinishLaunchingWithOptions:(id)launchOptions {
    NSMutableString *str = [NSMutableString new];
    [str appendString: @"\n[dwarf] [MXAppDelegate application:appDelegate:didFinishLaunchingWithOptions:]\n"];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [application class], @"application", application];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [launchOptions class], @"launchOptions", launchOptions];

    [Logger create];
    [Logger write:str];
    return %orig;
}

%end

%hook AIFAPIRequest
- (void)startRequestWithMethod:(int)method requestProtocol:(int)protocol isAsyc:(_Bool)async params:(id)params responeseHandler:(id)handler {
    NSMutableString *str = [NSMutableString new];
    [str appendString: @"\n[hali] -[AIFAPIRequest startRequestWithMethod:requestProtocol:isAsyc:params:responeseHandler:]:\n"];
    [str appendFormat: @"==> (%@): %@\n%d\n\n", @"int", @"method", method];
    [str appendFormat: @"==> (%@): %@\n%d\n\n", @"int", @"protocol", protocol];
    [str appendFormat: @"==> (%@): %@\n%d\n\n", @"_Bool", @"async", async];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [params class], @"params", params];

//    [str appendFormat:@"\n[hali] method:%d proto:%d async:%d params:%tu\n",
//        method, protocol, async, [params count]
//    ];

    NSMutableArray *parts = [NSMutableArray array];
    for (NSString *key in params) {
        NSString *part = [NSString stringWithFormat:@"%@=%@", key, params[key]];
        [parts addObject: part];
    }
    [str appendString:[parts componentsJoinedByString: @"&"]];
    [str appendString:@"\n"];
    [Logger write:str];
    return %orig;
}

//- (void)setCustomParams:(id)params {
//    NSMutableString *str = [NSMutableString new];
//    [str appendFormat:@"\n[hali] params: %@\n",
//        params
//    ];
//
//    [Logger write:str];
//    return %orig;
//}
//
//- (void)setCustomHeader:(id)headers {
//    return %orig;
//}
//
//- (id)initWithAPIConfig:(id)arg1 {
////    NSMutableString *str = [NSMutableString new];
////    [str appendString: @"\n[hali] initWithAPIConfig:\n"];
////    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg1 class], @"arg1", arg1];
////
////    [Logger write:str];
//    return %orig;
//}
//
//- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey, id> *)change context:(void *)context {
////    NSMutableString *str = [NSMutableString new];
////    [str appendFormat:@"\n[hali] API请求 %@ 属性 [%@] 改变了：%@\n",
////        //[object class], keyPath, change
////        MSHookIvar<id>(self, "_apiConfig"), keyPath, change
////    ];
//
////    unsigned int count = 0;
////    objc_property_t *properties =class_copyPropertyList([MSHookIvar<id>(self, "_apiConfig") class], &count);
////    for (int i = 0; i<count; i++)
////    {
////        objc_property_t property = properties[i];
////        NSString *propertyName = [NSString stringWithUTF8String: property_getName(property)];
////        NSString *propertyAttrs = [NSString stringWithUTF8String: property_getAttributes(property)];
////        [str appendFormat: @"%@, %@\n", propertyName, propertyAttrs];
////
////        unsigned int ivarsCnt = 0;
////        objc_property_attribute_t *attributes = property_copyAttributeList(property, &ivarsCnt);
////
////        for (objc_property_attribute_t *p = attributes; p < attributes + ivarsCnt; p++)
////        {
////            objc_property_attribute_t attribute = *p;
////            [str appendFormat: @"\tname: %s value: %s\n", attribute.name, attribute.value];
////
////            char* value = property_copyAttributeValue (property, attribute.name);
////            [str appendFormat: @"\tvalue: %s\n", value];
////            free(value);
////        }
////        free(attributes);
////    }
//
////    [Logger write:str];
//    return %orig;
//}
%end

%hook AIFNetworkSession

- (_Bool)startURLRequest:(id)method URLString:(id)url bodyParam:(NSDictionary *)body success:(id)arg4 fail:(id)arg5 {
    NSMutableString *str = [NSMutableString new];
    [str appendString: @"\n[hali] -[AIFNetworkSession startURLRequest:URLString:bodyParam:success:fail:]:\n"];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [method class], @"method", method];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [url class], @"url", url];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [body class], @"body", body];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg4 class], @"success", arg4];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg5 class], @"fail", arg5];

    NSMutableDictionary * headers = MSHookIvar<id>(self, "_httpHeaderFields");
    [str appendFormat: @"==> (%@): %@\n\n", @"headers", headers];

    [Logger write:str];

    NSMutableString *curlstr = [NSMutableString new];
    [curlstr appendString: @"curl --insecure -d \""];
    NSMutableArray *parts = [NSMutableArray array];
    for (NSString *key in body) {
        NSString *value = [NSString stringWithFormat: @"%@", body[key]];
        value = [value stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]];

        // 解决RFC1738规划中“+”为合法的URL字符问题。
        // http://www.ietf.org/rfc/rfc1738.txt
        // https://github.com/daltoniam/SwiftHTTP/issues/178
        value = [value stringByReplacingOccurrencesOfString:@"+" withString:@"%2B"];
        NSString *part = [NSString stringWithFormat:@"%@=%@", key, value];
        [parts addObject: part];
    }

    [curlstr appendString:[parts componentsJoinedByString: @"&"]];
    [curlstr appendString: @"\" "];
    [curlstr appendString: url];
    [Logger write:curlstr];

    return %orig;
}

%end

//%hook AIFAPICommonBizBuilder
//- (id)buildCommonParams:(id)params {
////    NSMutableString *str = [NSMutableString new];
////    [str appendString: @"\n[hali] buildCommonParams:\n"];
////    [str appendFormat: @"==> (%@): %@\n%@\n\n", [params class], @"params", params];
////
////    [Logger write:str];
//    return %orig;
//}
//%end
//
//%hook AIFAPISignatureGenerator
//
//+ (id)generateSignatureByApiConfig:(id)apiConfig requestParams:(id)params {
//    NSMutableString *str = [NSMutableString new];
//    [str appendString: @"\n[hali] generateSignatureByApiConfig:\n"];
//    [str appendFormat: @"==> (%@): %@\n%@\n\n", [apiConfig class], @"apiConfig", apiConfig];
//    [str appendFormat: @"==> (%@): %@\n%@\n\n", [params class], @"params", params];
//
//    [Logger write:str];
//    return %orig;
//}
//
//+ (id)getSignature:(id)arg1 signKey:(id)arg2 {
////    NSMutableString *str = [NSMutableString new];
////    [str appendString: @"\n[hali] getSignature:\n"];
////    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg1 class], @"arg1", arg1];
////    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg2 class], @"arg2", arg2];
////
////    [Logger write:str];
//    return %orig;
//}
//
//+ (id)signature:(id)arg1 signKey:(id)arg2 {
////    NSMutableString *str = [NSMutableString new];
////    [str appendString: @"\n[hali] signature:\n"];
////    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg1 class], @"arg1", arg1];
////    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg2 class], @"arg2", arg2];
////
////    [Logger write:str];
//    return %orig;
//}
//
//+ (id)getSecuritySignature:(id)arg1 byAppKey:(id)arg2 {
////    NSMutableString *str = [NSMutableString new];
////    [str appendString: @"\n[hali] getSecuritySignature:\n"];
////    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg1 class], @"arg1", arg1];
////    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg2 class], @"arg2", arg2];
////
////    [Logger write:str];
//    return %orig;
//}
//
//%end
//
%hook SecurityGuardSecureSignature

- (id)signRequest:(SecurityGuardParamContext *)arg1 {
    NSMutableString *str = [NSMutableString new];
    [str appendString: @"\n[hali] [SecurityGuardSecureSignature signRequest:]\n"];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg1 class], @"arg1", arg1];
    [str appendFormat: @"%@: %lld\n", @"requestType", [arg1 requestType]];
    [str appendFormat: @"%@: %@\n", @"paramDict", [arg1 paramDict]];
    [str appendFormat: @"%@: %@\n", @"appKey", [arg1 appKey]];

    [Logger write:str];
    return %orig;
}

- (id)callCoreSignFunctionsWithArray:(char ***)arg1 arrayLen:(unsigned int)arg2 appKey:(id)arg3 signType:(int)arg4 mask:(id)arg5 {
    NSMutableString *str = [NSMutableString new];
    [str appendString: @"\n[hali] -[SecurityGuardSecureSignature callCoreSignFunctionsWithArray:arrayLen:appKey:signType:mask:]\n"];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [self class], @"self", self];
    [str appendFormat: @"==> (%@): %@\n%s\n\n", @"char ***", @"arg1", **arg1];
    [str appendFormat: @"==> (%@): %@\n%u\n\n", @"unsigned int", @"arg2", arg2];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg3 class], @"arg3", arg3];
    [str appendFormat: @"==> (%@): %@\n%d\n\n", @"int", @"arg4", arg4];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg5 class], @"arg5", arg5];

   // const unsigned char *p = (const unsigned char *)**arg1;
   // NSData *data = [NSData dataWithBytes:p length:strlen(**arg1)];
   // [str appendFormat: @"==> (raw bytes): %@\n\n", data];

    [Logger write:str];
    return %orig;
}

%end

%hook AFHTTPRequestSerializer

- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4 {
    NSMutableString *str = [NSMutableString new];
    [str appendString: @"\n[hali] -[AFHTTPRequestSerializer requestWithMethod:URLString:parameters:error:]:\n"];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg1 class], @"method", arg1];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg2 class], @"url", arg2];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [arg3 class], @"parameters", arg3];
    [str appendFormat: @"==> (%@): %@\n%@\n\n", [*arg4 class], @"error", *arg4];

    NSMutableDictionary * headers = MSHookIvar<id>(self, "_mutableHTTPRequestHeaders");
    [str appendFormat: @"==> (%@): %@\n\n", @"headers", headers];

    [Logger write:str];

    return %orig;
}

%end
