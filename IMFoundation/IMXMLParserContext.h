/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSData;

@interface IMXMLParserContext : XXUnknownSuperclass {
	NSData* _inContentAsData;
}
@property(readonly, assign) NSArray* resultsForLogging;
@property(readonly, assign) NSString* name;
@property(readonly, assign) NSData* inContentAsData;	// @synthesize=_inContentAsData
// declared property getter: -(id)inContentAsData;
// declared property getter: -(id)resultsForLogging;
// declared property getter: -(id)name;
-(id)inContent;
-(void)reset;
-(void)dealloc;
-(id)initWithContentAsData:(id)contentAsData;
-(id)initWithContent:(id)content;
@end

