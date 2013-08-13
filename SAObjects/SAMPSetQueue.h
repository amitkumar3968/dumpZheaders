/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL, SAMPCollection;

@interface SAMPSetQueue : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray* sort;
@property(retain, nonatomic) SAMPCollection* mediaItems;
@property(copy, nonatomic) NSArray* filters;
@property(copy, nonatomic) NSURL* targetAppId;
+(id)setQueueWithDictionary:(id)dictionary context:(id)context;
+(id)setQueue;
-(BOOL)requiresResponse;
// declared property setter: -(void)setSort:(id)sort;
// declared property getter: -(id)sort;
// declared property setter: -(void)setMediaItems:(id)items;
// declared property getter: -(id)mediaItems;
// declared property setter: -(void)setFilters:(id)filters;
// declared property getter: -(id)filters;
// declared property setter: -(void)setTargetAppId:(id)anId;
// declared property getter: -(id)targetAppId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
