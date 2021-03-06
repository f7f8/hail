//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSData, NSInputStream, NSRunLoop, NSString, NSURLRequest, TFESPDYProtocol;

@interface TFESPDYStream : NSObject <NSStreamDelegate>
{
    NSData *_data;	// 8 = 0x8
    NSString *_dataFile;	// 16 = 0x10
    NSInputStream *_dataStream;	// 24 = 0x18
    NSRunLoop *_runLoop;	// 32 = 0x20
    struct __CFReadStream *_dataStreamRef;	// 40 = 0x28
    struct __CFRunLoop *_runLoopRef;	// 48 = 0x30
    unsigned long long _writeDataIndex;	// 56 = 0x38
    unsigned long long _writeStreamChunkLength;	// 64 = 0x40
    struct z_stream_s _zlibStream;	// 72 = 0x48
    _Bool _compressedResponse;	// 184 = 0xb8
    _Bool _writeStreamOpened;	// 185 = 0xb9
    int _zlibStreamStatus;	// 188 = 0xbc
    unsigned char _priority;	// 192 = 0xc0
    _Bool _local;	// 193 = 0xc1
    _Bool _localSideClosed;	// 194 = 0xc2
    _Bool _remoteSideClosed;	// 195 = 0xc3
    _Bool _receivedReply;	// 196 = 0xc4
    unsigned int _streamId;	// 200 = 0xc8
    unsigned int _sendWindowSize;	// 204 = 0xcc
    unsigned int _receiveWindowSize;	// 208 = 0xd0
    unsigned int _sendWindowSizeLowerBound;	// 212 = 0xd4
    unsigned int _receiveWindowSizeLowerBound;	// 216 = 0xd8
    id <NSURLProtocolClient> _client;	// 224 = 0xe0
    id <TFESPDYStreamDataDelegate> _dataDelegate;	// 232 = 0xe8
    NSURLRequest *_request;	// 240 = 0xf0
    TFESPDYProtocol *_protocol;	// 248 = 0xf8
}

@property(nonatomic) unsigned int receiveWindowSizeLowerBound; // @synthesize receiveWindowSizeLowerBound=_receiveWindowSizeLowerBound;
@property(nonatomic) unsigned int sendWindowSizeLowerBound; // @synthesize sendWindowSizeLowerBound=_sendWindowSizeLowerBound;
@property(nonatomic) unsigned int receiveWindowSize; // @synthesize receiveWindowSize=_receiveWindowSize;
@property(nonatomic) unsigned int sendWindowSize; // @synthesize sendWindowSize=_sendWindowSize;
@property(nonatomic) _Bool receivedReply; // @synthesize receivedReply=_receivedReply;
@property(nonatomic) _Bool remoteSideClosed; // @synthesize remoteSideClosed=_remoteSideClosed;
@property(nonatomic) _Bool localSideClosed; // @synthesize localSideClosed=_localSideClosed;
@property(nonatomic) _Bool local; // @synthesize local=_local;
@property(nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned int streamId; // @synthesize streamId=_streamId;
@property(nonatomic) __weak TFESPDYProtocol *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) __weak NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSInputStream *dataStream; // @synthesize dataStream=_dataStream;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <TFESPDYStreamDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak id <NSURLProtocolClient> client; // @synthesize client=_client;
- (void).cxx_destruct;	// IMP=0x0000000101093008
- (void)_unscheduleNSInputStream;	// IMP=0x0000000101092d4c
- (void)_unscheduleCFReadStream;	// IMP=0x0000000101092cd0
- (void)_scheduleNSInputStream;	// IMP=0x0000000101092c00
- (void)_scheduleCFReadStream;	// IMP=0x0000000101092a9c
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x00000001010929e4
- (void)handleDataStreamEvent:(unsigned long long)arg1;	// IMP=0x0000000101092954
- (void)didLoadData:(id)arg1;	// IMP=0x000000010109256c
- (void)didReceiveResponse:(id)arg1;	// IMP=0x0000000101091abc
- (id)readData:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000101091820
@property(readonly, nonatomic) _Bool hasDataPending;
@property(readonly, nonatomic) _Bool hasDataAvailable;
@property(readonly, nonatomic) _Bool closed;
- (void)closeWithStatus:(unsigned int)arg1;	// IMP=0x0000000101091400
- (void)closeWithError:(id)arg1;	// IMP=0x00000001010912a8
- (void)dealloc;	// IMP=0x0000000101091178
- (void)startWithStreamId:(unsigned int)arg1 sendWindowSize:(unsigned int)arg2 receiveWindowSize:(unsigned int)arg3;	// IMP=0x0000000101090e30
- (id)initWithProtocol:(id)arg1 dataDelegate:(id)arg2;	// IMP=0x0000000101090c94
- (id)init;	// IMP=0x0000000101090c34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

