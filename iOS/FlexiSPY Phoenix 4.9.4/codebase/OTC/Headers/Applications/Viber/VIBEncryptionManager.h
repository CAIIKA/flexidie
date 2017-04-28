/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "VIBEncryptionManagerProtocol-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSSet;

@interface VIBEncryptionManager : NSObject //<VIBEncryptionManagerProtocol>
{
//    id <VIBSecureMessagesPhoneService><VIBPhoneService><VIBDelayedAPIPhoneService> _phoneService;
//    id <VIBEncryptionManagerInjection> _injection;
    NSMutableDictionary *_encryptionSessions;
    NSOperationQueue *_decryptionQueue;
    NSSet *_supportedMediaTypes;
}

@property(readonly, nonatomic) NSSet *supportedMediaTypes; // @synthesize supportedMediaTypes=_supportedMediaTypes;
//- (void).cxx_destruct;
- (void)handleSecureStateChanged:(id)arg1;
- (void)decryptFile:(id)arg1 withEncryptionParams:(id)arg2;
- (id)decryptData:(id)arg1 withEncryptionParams:(id)arg2;
- (void)decryptAttachment:(id)arg1 completion:(id)arg2;
- (id)calculateMD5ForAttachment:(id)arg1;
- (id)encryptData:(id)arg1 encryptionKey:(id *)arg2;
- (id)popEncryptionParamsForContext:(id)arg1;
- (_Bool)endEncryptionWithContext:(id)arg1;
- (_Bool)encryptData:(char **)arg1 length:(unsigned long long)arg2 withContext:(id)arg3;
- (_Bool)beginEncryptionWithContext:(id)arg1;
- (void)checkEncryptionForConversation:(id)arg1 completion:(id)arg2;
- (void)checkEncryptionAbilityForAttachment:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)initWithInjector:(id)arg1;

@end
