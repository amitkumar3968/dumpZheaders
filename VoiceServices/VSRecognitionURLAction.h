/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VSRecognitionAction.h"

@class NSString, NSAttributedString, NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction {
	NSURL* _url;
}
@property(retain) id URL;	// converted property
-(id)perform;
// converted property getter: -(id)URL;
// converted property setter: -(void)setURL:(id)url;
-(int)completionType;
-(void)dealloc;
@end
