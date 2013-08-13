/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSError;

@interface SSSoftwareUpdatesResponse : XXUnknownSuperclass {
@private
	NSError* _error;
	BOOL _failed;
	NSArray* _updateItems;
}
@property(readonly, assign) NSArray* updateItems;
@property(readonly, assign, getter=isFailed) BOOL failed;
@property(readonly, assign) NSError* error;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
-(void)setUpdateItemsWithItemDictionaries:(id)itemDictionaries;
-(id)copyUpdateItemDictionaries;
-(id)description;
// declared property getter: -(id)updateItems;
// declared property getter: -(BOOL)isFailed;
// declared property getter: -(id)error;
-(void)dealloc;
-(id)initWithError:(id)error;
@end
