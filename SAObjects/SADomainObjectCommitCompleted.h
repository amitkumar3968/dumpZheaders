/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"
#import "SADomainObjectCommand.h"

@class NSString, NSURL;

@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSURL* identifier;
+(id)domainObjectCommitCompletedWithDictionary:(id)dictionary context:(id)context;
+(id)domainObjectCommitCompleted;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property getter: -(id)identifier;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

