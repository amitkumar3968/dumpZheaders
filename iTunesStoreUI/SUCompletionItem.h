/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString;

@interface SUCompletionItem : XXUnknownSuperclass {
@private
	NSString* _alternateTitle;
	NSString* _title;
	NSURL* _url;
}
@property(readonly, assign, nonatomic) NSURL* URL;	// @synthesize=_url
@property(readonly, assign, nonatomic) NSString* title;	// @synthesize=_title
@property(readonly, assign, nonatomic) NSString* alternateTitle;	// @synthesize=_alternateTitle
// declared property getter: -(id)URL;
// declared property getter: -(id)title;
// declared property getter: -(id)alternateTitle;
-(void)dealloc;
-(id)initWithPropertyList:(id)propertyList;
-(id)init;
@end
