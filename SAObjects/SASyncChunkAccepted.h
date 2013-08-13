/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SASyncAnchor* current;
+(id)chunkAcceptedWithDictionary:(id)dictionary context:(id)context;
+(id)chunkAccepted;
-(BOOL)requiresResponse;
// declared property setter: -(void)setCurrent:(id)current;
// declared property getter: -(id)current;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
