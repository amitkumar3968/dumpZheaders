/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface CPDumpType : XXUnknownSuperclass {
@private
	NSString* mName;
}
@property(retain) id name;	// converted property
-(void)fromXml:(xmlNode*)xml toBinary:(FILE*)binary state:(id)state;
-(void)fromBinary:(FILE*)binary toXml:(xmlNode*)xml state:(id)state;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
-(void)dealloc;
-(id)initWithName:(id)name;
-(id)init;
@end

