/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADClient.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CHDAnchor;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : XXUnknownSuperclass <OADClient> {
@private
	CHDAnchor* mAnchor;
}
@property(retain) id anchor;	// converted property
-(CGRect)bounds;
-(BOOL)hasBounds;
// converted property setter: -(void)setAnchor:(id)anchor;
// converted property getter: -(id)anchor;
-(void)dealloc;
@end

