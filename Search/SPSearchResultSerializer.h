/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface SPSearchResultSerializer : XXUnknownSuperclass {
	unsigned _byteVector;
	unsigned _byteVectorCnt;
	unsigned _byteVectorCapacity;
	NSMutableArray* _sections;
	Class _lastResultClass;
	BOOL _respondsToTitleUTF8String;
	BOOL _respondsToSubtitleUTF8String;
	BOOL _respondsToAuxiliaryTitleUTF8String;
	BOOL _respondsToAuxiliarySubtitleUTF8String;
	BOOL _respondsToSummaryUTF8String;
	BOOL _respondsToIdentifier;
	BOOL _respondsToURL;
	BOOL _respondsToBadgeValue;
	BOOL _inProc;
	BOOL _completed;
}
@property(readonly, assign, nonatomic) BOOL completed;	// @synthesize=_completed
@property(readonly, assign) unsigned byteVector;	// converted property
// declared property getter: -(BOOL)completed;
// converted property getter: -(unsigned)byteVector;
-(unsigned)byteVectorCount;
-(void)serialize;
-(BOOL)appendResult:(id)result;
-(BOOL)appendSection:(id)section;
-(unsigned)sectionCount;
-(id)_convertConformingResult:(id)result;
-(unsigned)write:(const char*)write maxLength:(unsigned)length;
-(void)dealloc;
-(id)initWithInitialCapacity:(unsigned)initialCapacity;
-(id)initWithInitialCapacity:(unsigned)initialCapacity inProc:(BOOL)proc;
-(unsigned)_allocateSize:(unsigned)size;
-(id)init;
@end

