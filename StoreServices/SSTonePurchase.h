/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSPurchase.h"
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSNumber, NSArray, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying> {
@private
	NSArray* _allowedToneStyles;
	NSNumber* _assigneeIdentifier;
	NSString* _assigneeToneStyle;
	BOOL _shouldMakeDefaultRingtone;
	BOOL _shouldMakeDefaultTextTone;
}
@property(assign) BOOL shouldMakeDefaultTextTone;
@property(assign) BOOL shouldMakeDefaultRingtone;
@property(copy) NSString* assigneeToneStyle;
@property(retain) NSNumber* assigneeIdentifier;
@property(copy) NSArray* allowedToneStyles;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
// declared property getter: -(BOOL)shouldMakeDefaultTextTone;
// declared property getter: -(BOOL)shouldMakeDefaultRingtone;
// declared property setter: -(void)setShouldMakeDefaultTextTone:(BOOL)makeDefaultTextTone;
// declared property setter: -(void)setShouldMakeDefaultRingtone:(BOOL)makeDefaultRingtone;
// declared property setter: -(void)setAssigneeToneStyle:(id)style;
// declared property setter: -(void)setAssigneeIdentifier:(id)identifier;
// declared property setter: -(void)setAllowedToneStyles:(id)styles;
// declared property getter: -(id)assigneeToneStyle;
// declared property getter: -(id)assigneeIdentifier;
// declared property getter: -(id)allowedToneStyles;
-(void)dealloc;
-(id)initWithItem:(id)item offer:(id)offer;
@end

