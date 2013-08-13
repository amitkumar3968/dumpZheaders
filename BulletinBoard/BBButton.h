/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BBAction, NSString;

@interface BBButton : XXUnknownSuperclass <NSCopying, NSCoding> {
	NSString* _title;
	BBAction* _action;
}
@property(retain, nonatomic) BBAction* action;	// @synthesize=_action
@property(copy, nonatomic) NSString* title;	// @synthesize=_title
+(id)buttonWithTitle:(id)title action:(id)action;
+(id)_possiblyCachedButtonForInitializedButton:(id)initializedButton;
+(void)_removeButtonFromCache:(id)cache;
+(void)_addButtonToCache:(id)cache;
// declared property setter: -(void)setAction:(id)action;
// declared property getter: -(id)action;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
@end

