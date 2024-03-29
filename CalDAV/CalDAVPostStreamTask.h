/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface CalDAVPostStreamTask : XXUnknownSuperclass {
	NSString* _previousScheduleTag;
	NSString* _filename;
}
@property(retain) NSString* filename;	// @synthesize=_filename
@property(retain) NSString* previousScheduleTag;	// @synthesize=_previousScheduleTag
// declared property setter: -(void)setFilename:(id)filename;
// declared property getter: -(id)filename;
// declared property setter: -(void)setPreviousScheduleTag:(id)tag;
// declared property getter: -(id)previousScheduleTag;
-(id)responseData;
-(id)copyDefaultParserForContentType:(id)contentType;
-(id)requestBody;
-(id)requestBodyStream;
-(id)additionalHeaderValues;
-(id)utf8PercentEscapedFilename;
-(id)lossyAsciiFilename;
-(void)dealloc;
@end

