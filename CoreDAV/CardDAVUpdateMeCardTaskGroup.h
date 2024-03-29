/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
	NSURL* _homeURL;
	NSURL* _cardURL;
}
@property(readonly, assign) NSURL* homeURL;	// @synthesize=_homeURL
@property(readonly, assign) NSURL* cardURL;	// @synthesize=_cardURL
// declared property getter: -(id)homeURL;
// declared property getter: -(id)cardURL;
-(void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;
-(void)startTaskGroup;
-(id)_newPropPatchTask;
-(void)taskGroupWillCancelWithError:(id)taskGroup;
-(id)description;
-(void)dealloc;
-(id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager homeURL:(id)url cardURL:(id)url4;
@end

