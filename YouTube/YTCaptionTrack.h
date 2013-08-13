/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class YTVideo, NSURL, NSString;

@interface YTCaptionTrack : XXUnknownSuperclass {
	YTVideo* _video;
	NSString* _title;
	NSString* _language;
	NSURL* _captionTrackURL;
	BOOL _speechRecognition;
}
@property(assign, nonatomic) BOOL speechRecognition;	// @synthesize=_speechRecognition
@property(retain, nonatomic) NSURL* captionTrackURL;	// @synthesize=_captionTrackURL
@property(retain, nonatomic) NSString* language;	// @synthesize=_language
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
@property(retain, nonatomic) YTVideo* video;	// @synthesize=_video
// declared property setter: -(void)setSpeechRecognition:(BOOL)recognition;
// declared property getter: -(BOOL)speechRecognition;
// declared property setter: -(void)setCaptionTrackURL:(id)url;
// declared property getter: -(id)captionTrackURL;
// declared property setter: -(void)setLanguage:(id)language;
// declared property getter: -(id)language;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setVideo:(id)video;
// declared property getter: -(id)video;
-(id)description;
-(void)dealloc;
@end
