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

@class NSString;

@interface BBContent : XXUnknownSuperclass <NSCopying, NSCoding> {
@private
	NSString* _title;
	NSString* _subtitle;
	NSString* _message;
}
@property(copy, nonatomic) NSString* message;	// @synthesize=_message
@property(copy, nonatomic) NSString* subtitle;	// @synthesize=_subtitle
@property(copy, nonatomic) NSString* title;	// @synthesize=_title
+(id)contentWithTitle:(id)title subtitle:(id)subtitle message:(id)message;
// declared property setter: -(void)setMessage:(id)message;
// declared property getter: -(id)message;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property getter: -(id)subtitle;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToContent:(id)content;
-(void)dealloc;
@end

