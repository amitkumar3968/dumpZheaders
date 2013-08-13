/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKAVMediaObject.h"

@class NSString, NSDictionary;

@interface CKAudioMediaObject : CKAVMediaObject {
@private
	NSDictionary* _transcodeOptions;
	NSString* _transcodePath;
}
+(id)mimeTypesToFileExtensions;
-(id)effectiveExportedFilename;
-(double)transcodeDuration;
-(double)transcodeEndTime;
-(double)transcodeStartTime;
-(id)transcodeMimeType;
-(id)transcodedFilename;
-(void)prepareForTranscode;
-(id)_transcodeOptions;
-(int)mediaType;
-(void)dealloc;
@end
