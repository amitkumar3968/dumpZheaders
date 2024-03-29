/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString;

@interface SACreateSessionInfoRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSData* sessionInfoRequest;
+(id)createSessionInfoRequestWithDictionary:(id)dictionary context:(id)context;
+(id)createSessionInfoRequest;
// declared property setter: -(void)setSessionInfoRequest:(id)request;
// declared property getter: -(id)sessionInfoRequest;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

