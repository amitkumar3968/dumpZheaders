/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAPing : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
+(id)pingWithDictionary:(id)dictionary context:(id)context;
+(id)ping;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
