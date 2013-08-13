/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUMessagePart.h"

@class NSData, NSString;

@interface SUDataMessagePart : SUMessagePart {
	NSData* _data;
	NSString* _mimeType;
}
@property(readonly, assign, nonatomic) NSData* data;	// @synthesize=_data
// declared property getter: -(id)data;
-(id)newUnfilteredInputSource;
-(id)MIMEType;
-(void)dealloc;
-(id)initWithData:(id)data MIMEType:(id)type;
@end

