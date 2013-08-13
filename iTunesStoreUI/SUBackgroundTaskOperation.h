/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ISOperation, NSString;

@interface SUBackgroundTaskOperation : XXUnknownSuperclass {
	ISOperation* _operation;
	NSString* _permissionIdentifier;
	unsigned _taskIdentifier;
}
@property(readonly, assign) NSString* permissionIdentifier;
@property(readonly, assign) ISOperation* operation;
-(void)_takeBackgroundAssertion;
-(void)_removeBackgroundAssertion;
-(void)_cancelBackgroundAssertion;
-(void)run;
// declared property getter: -(id)permissionIdentifier;
// declared property getter: -(id)operation;
-(void)dealloc;
-(id)initWithOperation:(id)operation identifier:(id)identifier;
@end

