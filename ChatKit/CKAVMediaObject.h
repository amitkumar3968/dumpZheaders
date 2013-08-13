/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKMediaObject.h"
#import "ChatKit-Structs.h"

@class NSString;

@interface CKAVMediaObject : CKMediaObject {
@private
	NSString* _createdFilename;
	BOOL _durationLoaded;
}
@property(assign) double duration;	// converted property
+(id)transcodeOptionsWithMaxBytes:(int)maxBytes forMediaType:(int)mediaType;
+(double)maxMMSTrimDurationForMediaType:(int)mediaType;
// converted property getter: -(double)duration;
// converted property setter: -(void)setDuration:(double)duration;
-(void)copyToPasteboard:(id)pasteboard;
-(id)icon;
-(id)subtitle;
-(id)title;
-(id)fileForDataWithExtension:(id)extension;
-(id)effectiveExportedFilename;
-(id)transcodeMimeType;
-(double)transcodeDuration;
-(double)transcodeEndTime;
-(double)transcodeStartTime;
-(id)transcodePath;
-(id)transcodedFilename;
-(void)prepareForTranscode;
-(void)dealloc;
@end

