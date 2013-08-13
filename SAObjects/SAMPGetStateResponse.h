/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSNumber, NSString, SAMPMediaItem;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(assign, nonatomic) int state;
@property(copy, nonatomic) NSString* source;
@property(copy, nonatomic) NSNumber* listeningToMusicApplication;
@property(retain, nonatomic) SAMPMediaItem* listeningToItem;
+(id)getStateResponseWithDictionary:(id)dictionary context:(id)context;
+(id)getStateResponse;
// declared property setter: -(void)setState:(int)state;
// declared property getter: -(int)state;
// declared property setter: -(void)setSource:(id)source;
// declared property getter: -(id)source;
// declared property setter: -(void)setListeningToMusicApplication:(id)musicApplication;
// declared property getter: -(id)listeningToMusicApplication;
// declared property setter: -(void)setListeningToItem:(id)item;
// declared property getter: -(id)listeningToItem;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

