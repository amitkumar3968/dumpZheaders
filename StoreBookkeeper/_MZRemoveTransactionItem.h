/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _MZRemoveTransactionItem : XXUnknownSuperclass {
@private
	NSString* _key;
	NSString* _version;
}
@property(copy, nonatomic) NSString* version;	// @synthesize=_version
@property(copy, nonatomic) NSString* key;	// @synthesize=_key
// declared property setter: -(void)setVersion:(id)version;
// declared property getter: -(id)version;
// declared property setter: -(void)setKey:(id)key;
// declared property getter: -(id)key;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)description;
-(void)dealloc;
@end

