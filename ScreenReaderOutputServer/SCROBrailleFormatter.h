/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "ScreenReaderOutputServer-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString;

@interface SCROBrailleFormatter : XXUnknownSuperclass <NSCopying> {
	CFArrayRef _chunkArray;
	CFDictionaryRef _chunkDictionary;
	CFDictionaryRef _tokenDictionary;
	int _firstToken;
	int _lastToken;
	int _contractionMode;
	BOOL _showEightDot;
	int _displayMode;
	id _appToken;
	NSAttributedString* _statusText;
	BOOL _currentUnread;
	BOOL _anyUnread;
	BOOL _showDotsSevenAndEight;
}
@property(retain) NSAttributedString* statusText;	// converted property
@property(retain) id appToken;	// converted property
@property(assign) BOOL anyUnread;	// converted property
@property(assign) BOOL currentUnread;	// converted property
@property(assign) int displayMode;	// converted property
@property(readonly, assign) CFArrayRef chunkArray;	// converted property
@property(readonly, assign) CFDictionaryRef chunkDictionary;	// converted property
@property(readonly, assign) int firstToken;	// converted property
@property(readonly, assign) int lastToken;	// converted property
@property(readonly, assign) int contractionMode;	// converted property
@property(readonly, assign) BOOL showEightDot;	// converted property
@property(readonly, assign) BOOL showDotsSevenAndEight;	// converted property
// converted property getter: -(int)lastToken;
// converted property getter: -(int)firstToken;
// converted property getter: -(CFDictionaryRef)chunkDictionary;
// converted property getter: -(CFArrayRef)chunkArray;
-(void)translate;
-(void)addText:(id)text language:(id)language selection:(NSRange*)selection token:(int)token focused:(BOOL)focused;
-(void)addText:(id)text selection:(NSRange*)selection token:(int)token focused:(BOOL)focused;
// converted property getter: -(id)statusText;
// converted property setter: -(void)setStatusText:(id)text;
// converted property getter: -(id)appToken;
// converted property setter: -(void)setAppToken:(id)token;
// converted property getter: -(BOOL)anyUnread;
// converted property setter: -(void)setAnyUnread:(BOOL)unread;
// converted property getter: -(BOOL)currentUnread;
// converted property setter: -(void)setCurrentUnread:(BOOL)unread;
// converted property getter: -(int)displayMode;
// converted property setter: -(void)setDisplayMode:(int)mode;
// converted property getter: -(BOOL)showDotsSevenAndEight;
// converted property getter: -(BOOL)showEightDot;
// converted property getter: -(int)contractionMode;
-(void)dealloc;
-(id)deepCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithContractionMode:(int)contractionMode showEightDot:(BOOL)dot showDotsSevenAndEight:(BOOL)eight;
@end
