/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GQDRoot;

__attribute__((visibility("hidden")))
@interface GQDSStylesheet : XXUnknownSuperclass {
@private
	GQDRoot* mRoot;
	GQDSStylesheet* mParent;
	CFDictionaryRef mIdentifiedStyles;
	CFArrayRef mStylesNeedingParentResolutionInParent;
	CFArrayRef mStylesNeedingParentResolution;
}
-(CFArrayRef)retainedArrayOfIdentifiedStyles;
-(void)resolveStyleParents;
-(void)addStyle:(id)style needingParentResolution:(const char*)resolution resolveInParent:(BOOL)parent;
-(id)styleWithXmlUid:(const char*)xmlUid;
-(id)styleWithIdentifier:(const char*)identifier;
-(BOOL)addStyle:(id)style withOwnedXmlUid:(char*)ownedXmlUid;
-(void)addStyle:(id)style withOwnedIdentifier:(char*)ownedIdentifier;
-(id)parent;
-(void)dealloc;
-(id)initWithRoot:(id)root;
@end

