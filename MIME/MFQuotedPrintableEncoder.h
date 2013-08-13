/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer {
	unsigned long _line;
	unsigned long _matchedFrom;
	unsigned char _lastHorizontalWhitespace;
	BOOL _forTextPart;
	BOOL _lastWasNewLine;
	BOOL _forHeader;
}
@property(assign, nonatomic) BOOL forHeader;	// @synthesize=_forHeader
@property(assign, nonatomic) BOOL forTextPart;	// @synthesize=_forTextPart
+(unsigned long)requiredSizeToEncodeHeaderBytes:(const char*)encodeHeaderBytes length:(unsigned long)length;
// declared property setter: -(void)setForHeader:(BOOL)header;
// declared property getter: -(BOOL)forHeader;
// declared property setter: -(void)setForTextPart:(BOOL)textPart;
// declared property getter: -(BOOL)forTextPart;
-(void)done;
-(int)appendData:(id)data;
@end
