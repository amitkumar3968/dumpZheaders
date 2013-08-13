/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SANoteUpdate : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL* identifier;
@property(copy, nonatomic) NSString* contentsToAppend;
@property(copy, nonatomic) NSURL* targetAppId;
+(id)updateWithDictionary:(id)dictionary context:(id)context;
+(id)update;
-(BOOL)requiresResponse;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property getter: -(id)identifier;
// declared property setter: -(void)setContentsToAppend:(id)append;
// declared property getter: -(id)contentsToAppend;
// declared property setter: -(void)setTargetAppId:(id)anId;
// declared property getter: -(id)targetAppId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

