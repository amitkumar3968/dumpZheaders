/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "NSCopying.h"
#import "FTServices-Structs.h"
#import "FTProfileMessage.h"

@class NSArray;

@interface FTProfileGetHandlesMessage : FTProfileMessage <NSCopying> {
	NSArray* _responseHandles;
}
@property(copy) NSArray* responseHandles;	// @synthesize=_responseHandles
// declared property setter: -(void)setResponseHandles:(id)handles;
// declared property getter: -(id)responseHandles;
-(void)handleResponseDictionary:(id)dictionary;
-(id)messageBody;
-(id)requiredKeys;
-(id)bagKey;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

