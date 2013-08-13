/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol BBAssertionDelegate;

@interface BBAssertion : XXUnknownSuperclass {
@private
	id<BBAssertionDelegate> _delegate;
	NSString* _identifier;
	unsigned _transactionID;
}
@property(readonly, retain) NSString* identifier;	// converted property
@property(readonly, assign) unsigned transactionID;	// converted property
// converted property getter: -(unsigned)transactionID;
// converted property getter: -(id)identifier;
-(void)increaseOrIgnoreTransactionID:(unsigned)anId;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate identifier:(id)identifier;
@end

