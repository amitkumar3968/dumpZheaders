/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCCancelDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OCCancel : XXUnknownSuperclass <OCCancelDelegate> {
@private
	BOOL mIsCancelled;
	BOOL mIsQuit;
}
-(BOOL)isQuit;
-(void)quit;
-(BOOL)isCancelled;
-(void)cancel;
-(id)init;
@end
