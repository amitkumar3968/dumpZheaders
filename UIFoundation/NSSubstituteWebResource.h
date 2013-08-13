/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString, NSData;

__attribute__((visibility("hidden")))
@interface NSSubstituteWebResource : XXUnknownSuperclass {
@private
	NSData* _data;
	NSURL* _url;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSString* _frameName;
}
@property(readonly, retain) NSData* data;	// converted property
@property(readonly, retain) NSString* textEncodingName;	// converted property
@property(readonly, retain) NSString* frameName;	// converted property
-(id)webResource;
// converted property getter: -(id)frameName;
// converted property getter: -(id)textEncodingName;
-(id)MIMEType;
-(id)URL;
// converted property getter: -(id)data;
-(void)dealloc;
-(id)initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5;
-(Class)_webResourceClass;
@end

