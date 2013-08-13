/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class CPRegularExpression, NSString;

@interface SUOverlayConfiguration : XXUnknownSuperclass {
@private
	CPRegularExpression* _bagKeyPattern;
	int _cornerRadius;
	BOOL _shouldShowNavigationBar;
	CGSize _size;
	NSString* _transitionName;
	CPRegularExpression* _urlPattern;
}
@property(readonly, assign, nonatomic) NSString* transitionName;	// @synthesize=_transitionName
@property(readonly, assign, nonatomic) CGSize size;	// @synthesize=_size
@property(readonly, assign, nonatomic) BOOL shouldShowNavigationBar;	// @synthesize=_shouldShowNavigationBar
@property(readonly, assign, nonatomic) int cornerRadius;	// @synthesize=_cornerRadius
// declared property getter: -(id)transitionName;
// declared property getter: -(CGSize)size;
// declared property getter: -(BOOL)shouldShowNavigationBar;
// declared property getter: -(int)cornerRadius;
-(BOOL)matchesURLBagKey:(id)key;
-(BOOL)matchesURL:(id)url;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
-(id)init;
@end
