/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface GrammarPart : XXUnknownSuperclass {
	int _order;
	int _depth;
	NSString* _name;
}
@property(readonly, assign) NSString* name;	// @synthesize=_name
@property(readonly, assign) int depth;	// @synthesize=_depth
@property(readonly, assign) int order;	// @synthesize=_order
+(id)instanceFromPlist:(id)plist;
// declared property getter: -(id)name;
// declared property getter: -(int)depth;
// declared property getter: -(int)order;
-(id)appliedTo:(id)to;
-(id)description;
-(void)dealloc;
-(void)genericSetUpFromPlist:(id)plist;
-(int)orderComparedTo:(id)to;
@end

