/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PDTimeListNodeList, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface PDAnimation : XXUnknownSuperclass {
@private
	PDTimeListNodeList* mTimeListNodeList;
	TSUNoCopyDictionary* mBuildMap;
}
@property(retain) id buildMap;	// converted property
+(void)initialize;
// converted property setter: -(void)setBuildMap:(id)map;
// converted property getter: -(id)buildMap;
-(id)addTimeListNodeList;
-(id)timeListNodeList;
-(void)dealloc;
-(id)init;
@end

