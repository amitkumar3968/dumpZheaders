/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "ScreenReaderOutputServer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableAttributedString, NSData;
@protocol SCROBrailleDriverProtocol;

@interface SCROBrailleLine : XXUnknownSuperclass {
	id<SCROBrailleDriverProtocol> _brailleDriver;
	int _size;
	int _statusSize;
	int _insetSize;
	int _lineOffset;
	int _leftInset;
	int _rightInset;
	int _masterStatusCellIndex;
	int _iBeamLocation;
	int _displayMode;
	BOOL _needsDisplayFlush;
	BOOL _needsStatusFlush;
	BOOL _blink;
	BOOL _currentUnread;
	BOOL _anyUnread;
	BOOL _isPanning;
	BOOL _showDotsSevenAndEight;
	char* _displayBuffer;
	char* _displayFilter;
	char* _blinkerBuffer;
	char* _statusFilter;
	NSData* _statusData;
	CFArrayRef _chunkArray;
	CFDictionaryRef _chunkDictionary;
	NSMutableAttributedString* _lineBuffer;
	id _appToken;
	int _firstToken;
	int _lastToken;
	struct {
		NSData* data;
		int alignment;
		int length;
		char* cells;
	} _virtualStatus;
}
@property(readonly, assign, nonatomic) BOOL needsDisplayFlush;	// @synthesize=_needsDisplayFlush
@property(assign) int displayMode;	// converted property
@property(assign) BOOL showDotsSevenAndEight;	// converted property
@property(assign) BOOL anyUnread;	// converted property
@property(assign) BOOL currentUnread;	// converted property
@property(assign) int masterStatusCellIndex;	// converted property
@property(retain) id appToken;	// converted property
@property(readonly, assign) int firstToken;	// converted property
@property(readonly, assign) int lastToken;	// converted property
+(void)initialize;
// declared property getter: -(BOOL)needsDisplayFlush;
-(void)_flush;
-(void)_flushRealStatus;
-(BOOL)display;
-(BOOL)_blink:(BOOL)blink;
-(void)blinker;
// converted property getter: -(int)displayMode;
// converted property setter: -(void)setDisplayMode:(int)mode;
// converted property getter: -(BOOL)showDotsSevenAndEight;
// converted property setter: -(void)setShowDotsSevenAndEight:(BOOL)eight;
-(id)newLineDescriptorscriptor;
-(int)tokenForRouterIndex:(int)routerIndex location:(int*)location appToken:(id*)token;
-(BOOL)getStatusRouterIndex:(int*)index forRawIndex:(int)rawIndex;
// converted property getter: -(int)lastToken;
// converted property getter: -(int)firstToken;
-(void)setFormatter:(id)formatter;
// converted property getter: -(BOOL)anyUnread;
// converted property setter: -(void)setAnyUnread:(BOOL)unread;
// converted property getter: -(BOOL)currentUnread;
// converted property setter: -(void)setCurrentUnread:(BOOL)unread;
-(BOOL)panRight;
-(BOOL)canPanRight;
-(BOOL)panLeft;
-(BOOL)canPanLeft;
-(void)_updateOffsets;
-(BOOL)_allowInset;
-(void)setVirtualStatus:(id)status alignment:(int)alignment;
-(void)setRealStatus:(id)status;
// converted property getter: -(int)masterStatusCellIndex;
// converted property setter: -(void)setMasterStatusCellIndex:(int)index;
-(void)setStatusSize:(int)size;
-(void)setMainSize:(int)size;
// converted property getter: -(id)appToken;
// converted property setter: -(void)setAppToken:(id)token;
-(void)dealloc;
-(id)initWithDriver:(id)driver mainSize:(int)size statusSize:(int)size3;
@end
