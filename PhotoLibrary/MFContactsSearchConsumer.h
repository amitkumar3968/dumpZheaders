/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol MFContactsSearchConsumer <NSObject>
-(void)endedNetworkActivity;
-(void)beganNetworkActivity;
-(void)finishedTaskWithID:(id)anId;
-(void)finishedSearchingForType:(int)type;
-(void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;
@end

