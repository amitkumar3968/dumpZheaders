/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSMutableArray, NSString;

@interface SSDownloadPolicy : XXUnknownSuperclass <NSCoding, SSXPCCoding, NSCopying> {
@private
	int _bagType;
	NSString* _downloadKind;
	NSMutableArray* _policyRules;
}
@property(copy, nonatomic) NSArray* policyRules;	// @synthesize=_policyRules
@property(readonly, assign, nonatomic) int URLBagType;	// @synthesize=_bagType
@property(readonly, assign, nonatomic) NSString* downloadKind;	// @synthesize=_downloadKind
// declared property getter: -(int)URLBagType;
// declared property getter: -(id)policyRules;
// declared property getter: -(id)downloadKind;
-(id)_policyRuleForSizeLimit:(long long)sizeLimit;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(void)unionPolicyRule:(id)rule;
-(void)unionNetworkConstraints:(id)constraints;
// declared property setter: -(void)setPolicyRules:(id)rules;
-(void)setPolicyRule:(id)rule;
-(void)dealloc;
-(id)initWithNetworkConstraints:(id)networkConstraints;
-(id)initWithDownloadKind:(id)downloadKind URLBagType:(int)type;
@end

