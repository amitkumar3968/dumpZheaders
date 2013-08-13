/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SUMessagePart : XXUnknownSuperclass {
	NSString* _contentEncoding;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
}
@property(readonly, assign, nonatomic) NSString* MIMEType;
@property(copy) NSString* contentEncoding;
@property(readonly, assign, nonatomic) NSString* composeText;
@property(readonly, assign, nonatomic) UIImage* composeImage;
// declared property setter: -(void)setContentEncoding:(id)encoding;
-(id)newUnfilteredInputSource;
// declared property getter: -(id)MIMEType;
-(id)copyPreparationOperations;
-(id)copyBodyInputSource;
// declared property getter: -(id)contentEncoding;
-(BOOL)conformsToUTI:(id)uti;
// declared property getter: -(id)composeText;
// declared property getter: -(id)composeImage;
-(void)dealloc;
-(id)init;
@end

