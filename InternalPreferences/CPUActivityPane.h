/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/InternalPreferences.framework/InternalPreferences
 */

#import "InternalPreferences-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITextView, NSThread;

@interface CPUActivityPane : XXUnknownSuperclass {
	NSThread* _worker;
	UITextView* _textView;
	BOOL _buf1[4096];
	BOOL _buf2[4096];
	char* _readBuffer;
	char* _writeBuffer;
}
-(void)_worker;
-(void)_switchBuffers:(id)buffers;
-(void)setPreferenceSpecifier:(id)specifier;
-(void)willMoveToSuperview:(id)superview;
-(void)_killWorker;
-(void)_startWorker;
-(void)_cleanupTextView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
