/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableSet;

@interface MessageStore : XXUnknownSuperclass <NSCopying> {
	NSMutableSet* _uniqueStrings;
	union {
		struct {
			NSMutableArray* _headerDataCache;
			NSMutableArray* _headerCache;
			NSMutableArray* _bodyDataCache;
			NSMutableArray* _bodyCache;
		} objectCaches;
		struct {
			CFDictionaryRef _headerDataCache;
			CFDictionaryRef _headerCache;
			CFDictionaryRef _bodyDataCache;
			CFDictionaryRef _bodyCache;
		} intKeyCaches;
	} _caches;
}
+(void)setDefaultMessageHeadersClass:(Class)aClass;
+(Class)classForMimePart;
+(Class)headersClass;
-(id)additionalHeadersForForwardOfMessage:(id)message;
-(id)additionalHeadersForReplyOfMessage:(id)message;
-(void)setMessageClass:(Class)aClass;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)mimepart;
-(void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted forMessage:(id)message;
-(BOOL)hasCompleteDataForMimePart:(id)mimePart;
-(id)bodyDataForMessage:(id)message isComplete:(BOOL*)complete isPartial:(BOOL*)partial downloadIfNecessary:(BOOL)necessary;
-(id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available downloadIfNecessary:(BOOL)necessary partial:(BOOL*)partial;
-(void)_flushAllCaches;
-(void)_flushAllCachesLocking:(BOOL)locking;
-(id)_cachedBodyDataContainerForMessage:(id)message valueIfNotPresent:(id)present;
-(id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;
-(id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;
-(id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;
-(id)_cachedHeaderDataForMessage:(id)message valueIfNotPresent:(id)present;
-(id)bestAlternativeForPart:(id)part;
-(id)defaultAlternativeForPart:(id)part;
-(id)decryptedTopLevelPartForPart:(id)part;
-(id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL*)download;
-(id)uniquedString:(id)string;
-(id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available isComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary;
-(id)bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;
-(id)_bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;
-(id)_setOrGetBody:(id)body forMessage:(id)message updateFlags:(BOOL)flags;
-(id)headersForMessage:(id)message fetchIfNotAvailable:(BOOL)available;
-(id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;
-(id)copyWithZone:(NSZone*)zone;
-(void)_flushAllMessageData;
-(void)dealloc;
@end

