/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AttributeKey : XXUnknownSuperclass {
	int _index;
	NSString* _key;
}
@property(readonly, assign) int index;	// converted property
@property(readonly, retain) NSString* key;	// converted property
+(id)instanceFromPlist:(id)plist;
-(void)dealloc;
-(id)initWithIndex:(int)index attributeName:(id)name;
-(id)initFromPlist:(id)plist;
// converted property getter: -(id)key;
// converted property getter: -(int)index;
@end

