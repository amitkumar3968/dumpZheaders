/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCopying.h"

@class NSData, NSArray, NSString;

@interface SSPlayInfoRequestContext : XXUnknownSuperclass <SSXPCCoding, NSCopying> {
@private
	NSString* _playerGUID;
	NSData* _sic;
	NSArray* _sinfs;
}
@property(copy, nonatomic) NSArray* sinfs;	// @synthesize=_sinfs
@property(copy, nonatomic) NSData* SICData;	// @synthesize=_sic
@property(copy, nonatomic) NSString* playerGUID;	// @synthesize=_playerGUID
// declared property setter: -(void)setSinfs:(id)sinfs;
// declared property getter: -(id)sinfs;
// declared property setter: -(void)setSICData:(id)data;
// declared property getter: -(id)SICData;
// declared property setter: -(void)setPlayerGUID:(id)guid;
// declared property getter: -(id)playerGUID;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
@end

